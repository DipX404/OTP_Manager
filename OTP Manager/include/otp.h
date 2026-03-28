#ifndef OTP_H
#define OTP_H

#include <time.h>

#define MAX_OTP 1000
#define VALIDITY 600

typedef struct
{
    int code;
    time_t expiry;
    int isAssigned;
    char user[50];
} OTP;

void generateOTP();          // old
void verifyOTP();            // old
void showActiveOTP();        // old
void deleteExpiredOTP();     // old

void initOTPPool();          // NEW
void assignOTP();            // NEW

//Admin Dashbord
void showStats();
void searchUserOTP();
void forceExpireOTP();
void resetSystem();
#endif