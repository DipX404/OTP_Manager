#include<stdio.h>
#include"storage.h"

void saveOTPHistory(int otp)
{
    FILE *f = fopen("data/otp_history.txt","a");
    fprintf(f,"%d\n",otp);
    fclose(f);
}