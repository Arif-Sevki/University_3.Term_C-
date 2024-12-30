#ifndef NOTIFICATIONSYSTEM_H
#define NOTIFICATIONSYSTEM_H

#include <iostream>
#include <string>

class NotificationSystem {
private:
    std::string recipient;

public:
    NotificationSystem(const std::string& recipient);

    void sendNotification(const std::string& message) const;
};

#endif // NOTIFICATIONSYSTEM_H
