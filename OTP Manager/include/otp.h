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

void generateOTP();          
void verifyOTP();            
void showActiveOTP();        
void deleteExpiredOTP();     

void initOTPPool();          
void assignOTP();            

// For Admin Dashboard
void showStats();
void searchUserOTP();
void forceExpireOTP();
void resetSystem();
#endif
