#include<stdio.h>
#include<stdlib.h>

#include"otp.h"
#include"ui.h"
#include"admin.h"

#define RED     "\033[1;31m"
#define RESET   "\033[0m"

int main()
{
    int choice;

    initOTPPool();

    while(1)
    {
        deleteExpiredOTP();
        showMenu();

        printf(RED "Enter Choice: " RESET);
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                generateOTP();
                break;

            case 2:
                verifyOTP();
                break;

            case 3:
                showActiveOTP();
                break;

            case 4:
                adminPanel();
                break;

            case 5:
                exit(0);

            default:
                printf(RED"Invalid Choice\n"RESET);
        }
    }
}