#include<stdio.h>
#include<time.h>
#include"logger.h"

void logEvent(char msg[])
{
    FILE *f = fopen("data/logs.txt","a");
    time_t now = time(NULL);
    fprintf(f,"%s : %s\n",ctime(&now),msg);
    fclose(f);
}