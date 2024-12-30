#ifndef ACSYSTEM_H
#define ACSYSTEM_H

#include "Device.h"

class ACSystem : public Device {
private:
    double temperature;
    int fanSpeed; // 1-5 scale

public:
    ACSystem(const std::string& name, double consumption, double temperature, int fanSpeed, NotificationSystem* notifier);

    void setTemperature(double newTemperature);
    void setFanSpeed(int newSpeed);

    void showDetails() const override;
};

#endif // ACSYSTEM_H
