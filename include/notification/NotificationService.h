#pragma once
#include <string>

class NotificationService {
    public:
        virtual bool sendNotification() = 0;
    virtual ~NotificationService() = default;
};