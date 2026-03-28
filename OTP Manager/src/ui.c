#include<stdio.h>
#include"ui.h"

#define CYAN "\033[1;36m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

/* void showBanner()
{
    printf(CYAN);
    printf("\n=====================================\n");
    printf("        OTP MANAGER SYSTEM\n");
    printf("=====================================\n");
    printf(RESET);
}*/

void showMenu()
{
    printf(CYAN);
    printf("\n|=======================================|\n");
    printf("|        OTP MANAGER SYSTEM             |\n");
    printf("|=======================================|\n");
    printf(RESET);

   // printf(GREEN);
    //printf("\n===== OTP MANAGER SYSTEM =====\n");
    printf(CYAN"|" GREEN"        1. Generate OTP" CYAN"                |"RESET "\n");
    printf(CYAN"|" GREEN"        2. Verify OTP" CYAN"                  |"RESET"\n");
    printf(CYAN"|" GREEN"        3. Active OTP List" CYAN"             |"RESET"\n");
    printf(CYAN"|" GREEN"        4. Admin Dashboard" CYAN"             |"RESET"\n");
    printf(CYAN"|" GREEN"        5. Exit" CYAN"                        |"RESET"\n");
    printf(CYAN"========================================="RESET"\n");
    // printf(CYAN"|" GREEN"        . Admin Dashboard" CYAN"                |"RESET"\n");
    // printf(CYAN"|" GREEN"        . Admin Dashboard" CYAN"                |"RESET"\n");
    // printf(CYAN"|"RESET "2. Verify OTP" CYAN"     |\n"RESET);
    // printf(CYAN"|"RESET "3. Active OTP List" CYAN"|\n"RESET);
    // printf(CYAN"|"RESET "4. Admin Dashboard" CYAN"|\n"RESET);
    // printf(CYAN"|"RESET "5. Exit" CYAN"           |\n"RESET);
    // printf(RESET);
}
