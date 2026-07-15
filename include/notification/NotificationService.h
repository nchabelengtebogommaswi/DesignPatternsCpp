#pragma once
#include <string>

class NotificationService {
    public:
        bool sendNotification(const std::string& notificationType);
};