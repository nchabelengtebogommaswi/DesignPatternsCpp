#pragma once
#include "notification/NotificationService.h"

class WhatsAppNotification: public NotificationService {
    public:
        bool sendNotification() override;
};