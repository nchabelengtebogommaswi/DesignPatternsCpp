#pragma once
#include "notification/NotificationService.h"

class EmailNotification : public NotificationService {
    public:
        bool sendNotification() override;
};