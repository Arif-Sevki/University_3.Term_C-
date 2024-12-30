#include "Device.h"
#include <iostream>

// Constructor
Device::Device(const std::string& name, double consumption, NotificationSystem* notifier)
    : name(name), isOn(false), consumptionPerHour(consumption), notifier(notifier) {}

// Destructor
Device::~Device() {}

// Setter
void Device::setName(const std::string& newName) {
    name = newName;
}

// Getter
std::string Device::getName() const {
    return name;
}

bool Device::getStatus() const {
    return isOn;
}

double Device::getConsumptionPerHour() const {
    return consumptionPerHour;
}

// Turn On
void Device::turnOn() {
    isOn = true;
    if (notifier) {
        notifier->sendNotification(name + " has been turned ON.");
    }
}

// Turn Off
void Device::turnOff() {
    isOn = false;
    if (notifier) {
        notifier->sendNotification(name + " has been turned OFF.");
    }
}
