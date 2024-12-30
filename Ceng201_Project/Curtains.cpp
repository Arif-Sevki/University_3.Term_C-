#include "Curtains.h"
#include <iostream>

// Constructor
Curtains::Curtains(const std::string& name, double consumption, int level, NotificationSystem* notifier)
    : Device(name, consumption, notifier), level(level) {}

// Set Level
void Curtains::setLevel(int newLevel) {
    level = newLevel;
    if (notifier) {
        notifier->sendNotification(name + " level set to " + std::to_string(level) + "% open.");
    }
}

// Show Details
void Curtains::showDetails() const {
    std::cout << "Curtains: " << name << ", Status: " << (isOn ? "On" : "Off")
              << ", Level: " << level << "% open\n"; // Satır sonuna \n eklendi
}
