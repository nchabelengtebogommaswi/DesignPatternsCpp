#include <iostream>
#include "notification/NotificationService.h"

int main()
{
    std::string notificationType = "";
    NotificationService *notificationService = new NotificationService();

    std::cout << "Please Enter Notification Type to Send" << std::endl;
    std::cout << "email" << std::endl;
    std::cout << "sms" << std::endl;
    std::cout << "whatsapp" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cin >> notificationType;

    notificationService->sendNotification(notificationType);
    delete notificationService;
    return 0;
}