#include<stdio.h>
#include<string.h>
#include<time.h>
#include"otp.h"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

extern OTP otp_list[];

void showStats()
{
    int active = 0, free = 0;

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].isAssigned)
            active++;
        else
            free++;
    }

    printf("\n--- SYSTEM STATS ---\n");
    printf("Total OTP: %d\n", MAX_OTP);
    printf("Active OTP: %d\n", active);
    printf("Free OTP: %d\n", free);
}

void searchUserOTP()
{
    char user[50];
    int found = 0;

    printf(GREEN"Enter Username: "RESET);
    scanf("%s", user);

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].isAssigned && strcmp(otp_list[i].user, user)==0)
        {
            printf("User: %s | OTP: %d\n", user, otp_list[i].code);
            found = 1;
        }
    }

    if(!found)
        printf("No active OTP for this user\n");
}

void forceExpireOTP()
{
    int otp;
    printf("Enter OTP to expire: ");
    scanf("%d",&otp);

    for(int i=0;i<MAX_OTP;i++)
    {
        if(otp_list[i].code == otp && otp_list[i].isAssigned)
        {
            otp_list[i].isAssigned = 0;
            printf("OTP expired manually\n");
            return;
        }
    }

    printf("OTP not found\n");
}

void resetSystem()
{
    for(int i=0;i<MAX_OTP;i++)
    {
        otp_list[i].isAssigned = 0;
    }

    printf(GREEN"System Reset Done\n"RESET);
}

/*void adminPanel()
{
    int choice;

    printf("\n===== ADMIN DASHBOARD =====\n");
    printf("1. Show Stats\n");
    printf("2. Search User OTP\n");
    printf("3. Force Expire OTP\n");
    printf("4. Clear History\n");
    printf("5. View Logs\n");
    printf("6. Reset System\n");
    printf("7. Back\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            showStats();
            break;

        case 2:
            searchUserOTP();
            break;

        case 3:
            forceExpireOTP();
            break;

        case 4:
            remove("data/otp_history.txt");
            printf("History Cleared\n");
            break;

        case 5:
        {
            FILE *f = fopen("data/logs.txt","r");
            char ch;
            while((ch=fgetc(f))!=EOF)
                putchar(ch);
            fclose(f);
            break;
        }

        case 6:
            resetSystem();
            break;

        case 7:
            return;

        default:
            printf("Invalid Choice\n");
    }
}*/

void adminPanel()
{
    int choice;

    printf(CYAN "\n|=====================================|\n" RESET);
    printf(GREEN"|         ADMIN DASHBOARD             |\n" RESET);
    printf(CYAN "|=====================================|\n" RESET);

    printf(CYAN"|" YELLOW "         1 System Statistics" CYAN"         |" RESET "\n");
    printf(CYAN"|" YELLOW "         2 Search User OTP" CYAN"           |" RESET "\n");
    printf(CYAN"|" YELLOW "         3 Force Expire OTP" CYAN"          |" RESET "\n");
    printf(CYAN"|" YELLOW "         4 Clear History" CYAN"             |" RESET "\n");
    printf(CYAN"|" YELLOW "         5 View Logs" CYAN"                 |" RESET "\n");
    printf(CYAN"|" YELLOW "         6 Reset System" CYAN"              |" RESET "\n");
    printf(CYAN"|" YELLOW "         7 Back" CYAN"                      |" RESET "\n");
    // printf(YELLOW " 2 Search User OTP\n" RESET);
    // printf(YELLOW " 3 Force Expire OTP\n" RESET);
    // printf(YELLOW " 4 Clear History\n" RESET);
    // printf(YELLOW " 5 View Logs\n" RESET);
    // printf(YELLOW " 6 Reset System\n" RESET);
    // printf(YELLOW " 7 Back\n" RESET);

    printf(CYAN "|=====================================|\n" RESET);
    printf(RED "Enter Choice: " RESET);
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf(GREEN "\n[INFO] Showing System Stats...\n" RESET);
            showStats();
            break;

        case 2:
            printf(BLUE "\n[INFO] Searching User OTP...\n" RESET);
            searchUserOTP();
            break;

        case 3:
            printf(RED "\n[WARNING] Force Expire Mode\n" RESET);
            forceExpireOTP();
            break;

        case 4:
            remove("data/otp_history.txt");
            printf(RED "[DONE] History Cleared\n" RESET);
            break;

        case 5:
        {
            printf(CYAN "\n[LOG FILE]\n" RESET);
            FILE *f = fopen("data/logs.txt","r");
            int ch;
            while((ch=fgetc(f))!=EOF)   
                putchar(ch);
            fclose(f);
            break;
        }

        case 6:
            printf(RED "\n[RESETTING SYSTEM...]\n" RESET);
            resetSystem();
            break;

        case 7:
            printf(GREEN "Returning...\n" RESET);
            return;

        default:
            printf(RED "Invalid Choice\n" RESET);
    }
}
