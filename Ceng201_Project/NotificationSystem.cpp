#include "NotificationSystem.h"

NotificationSystem::NotificationSystem(const std::string& recipient)
    : recipient(recipient) {}

void NotificationSystem::sendNotification(const std::string& message) const {
    std::cout << "[Notification to " << recipient << "]: " << message << std::endl;
}
