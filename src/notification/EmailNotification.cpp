#include <iostream>
#include "notification/EmailNotification.h"

bool EmailNotification::sendNotification() {
    std::cout << "sending email notification: " << __FILE_NAME__ << "::" << __FUNCTION__<< std::endl;
    return true;
}