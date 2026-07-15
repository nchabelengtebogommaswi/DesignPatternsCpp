#include <iostream>
#include "notification/SmsNotification.h"

bool SmsNotification::sendNotification() {
    std::cout << "sending sms notification: " << __FILE_NAME__ << "::" << __FUNCTION__<< std::endl;
    return true;
}