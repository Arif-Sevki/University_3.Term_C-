#ifndef CURTAINS_H
#define CURTAINS_H

#include "Device.h"

class Curtains : public Device {
private:
    int level; // 0-100 (0: closed, 100: fully open)

public:
    Curtains(const std::string& name, double consumption, int level, NotificationSystem* notifier);

    void setLevel(int newLevel);
    void showDetails() const override;
};

#endif // CURTAINS_H
