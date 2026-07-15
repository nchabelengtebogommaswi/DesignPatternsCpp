#include <iostream>
#include "notification/WhatsAppNotification.h"

bool WhatsAppNotification::sendNotification() {
    std::cout << "sending whatsapp notification: " << __FILE_NAME__ << "::" << __FUNCTION__<< std::endl;
    return true;
}