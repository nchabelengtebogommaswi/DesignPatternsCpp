#include <iostream>
#include "notification/NotificationService.h"

bool NotificationService::sendNotification(const std::string &notificationType) {

    if (notificationType == "email") {
        std::cout << "sending email notification" << std::endl;
    }
    else if (notificationType == "sms") {
        std::cout << "sending sms notification" << std::endl;
    }
    else if (notificationType == "whatsapp") {
        std::cout << "sending whatsapp notification" << std::endl;
    }
    else {
        std::cout << "unknown notification" << std::endl;
        return false;
    }

    return true;
}
