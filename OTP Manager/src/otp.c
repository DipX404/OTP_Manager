#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"otp.h"
#include"storage.h"
#include"logger.h"

#define RED     "\033[1;31m"
#define RESET   "\033[0m"

OTP otp_list[MAX_OTP];

int isDuplicate(int otp, int limit)
{
    for(int i=0;i<limit;i++)
        if(otp_list[i].code == otp)
            return 1;
    return 0;
}

void initOTPPool()
{
    srand(time(NULL));

    for(int i=0;i<MAX_OTP;i++)
    {
        int otp;

        do {
            otp = rand()%900000 + 100000;
        } while(isDuplicate(otp, i));

        otp_list[i].code = otp;
        otp_list[i].isAssigned = 0;
    }

    printf(RED"1000 OTP Pool Generated\n"RESET);
}

void assignOTP()
{
    char user[50];
    printf("Enter Username: ");
    scanf("%s", user);

    time_t now = time(NULL);

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].isAssigned == 0)
        {
            otp_list[i].isAssigned = 1;
            otp_list[i].expiry = now + VALIDITY;
            strcpy(otp_list[i].user, user);

            printf("OTP for %s: %d\n", user, otp_list[i].code);

            saveOTPHistory(otp_list[i].code);
            logEvent("OTP Assigned");

            return;
        }
    }

    printf(RED"No OTP Available\n"RESET);
}

void verifyOTP()
{
    int userOTP;
    printf(RED"Enter OTP: "RESET);
    scanf("%d",&userOTP);

    time_t now = time(NULL);

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].code == userOTP && otp_list[i].isAssigned)
        {
            if(now <= otp_list[i].expiry)
            {
                printf("OTP Verified\n");
                logEvent("OTP Verified");

                otp_list[i].isAssigned = 0;
                return;
            }
            else
            {
                printf("OTP Expired\n");
                otp_list[i].isAssigned = 0;
                return;
            }
        }
    }

    printf(RED"Invalid OTP\n" RESET);
}

void showActiveOTP()
{
    time_t now = time(NULL);

    printf("\nActive OTP List\n");

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].isAssigned && now <= otp_list[i].expiry)
        {
            printf("User: %s | OTP: %d | Time Left: %ld sec\n",
            otp_list[i].user,
            otp_list[i].code,
            otp_list[i].expiry - now);
        }
    }
}

void deleteExpiredOTP()
{
    time_t now = time(NULL);

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].isAssigned && now > otp_list[i].expiry)
        {
            otp_list[i].isAssigned = 0;
        }
    }
}

/* Old compatibility */
void generateOTP()
{
    assignOTP();
}