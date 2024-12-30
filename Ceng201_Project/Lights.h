#ifndef LIGHTS_H
#define LIGHTS_H

#include "Device.h"

class Lights : public Device {
private:
    std::string color;
    int brightness; // 0-100

public:
    Lights(const std::string& name, double consumption, const std::string& color, int brightness, NotificationSystem* notifier);

    void setColor(const std::string& newColor);
    void setBrightness(int newBrightness);

    void showDetails() const override;
};

#endif // LIGHTS_H
