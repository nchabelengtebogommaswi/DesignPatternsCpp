#pragma once
#include "notification/NotificationService.h"

class SmsNotification : public NotificationService {
    public:
        bool sendNotification() override;
};