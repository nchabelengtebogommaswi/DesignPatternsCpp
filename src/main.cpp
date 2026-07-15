#include <iostream>
#include "notification/NotificationService.h"
#include "notification/EmailNotification.h"
#include "notification/SmsNotification.h"
#include "notification/WhatsAppNotification.h"

int main()
{
    std::string notificationType = "";
    NotificationService *notificationService = nullptr;

    std::cout << "Please Enter Notification Type to Send" << std::endl;
    std::cout << "email" << std::endl;
    std::cout << "sms" << std::endl;
    std::cout << "whatsapp" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cin >> notificationType;

    if (notificationType == "email") {
        notificationService = new EmailNotification();
    } else if (notificationType == "sms") {
        notificationService = new SmsNotification();
    }else if (notificationType == "whatsapp") {
        notificationService = new WhatsAppNotification();
    }

    if (notificationService != nullptr) {
        notificationService->sendNotification();
        delete notificationService;
    }
    else {
        std::cout << "unknown notification" << std::endl;
    }

    return 0;
}
