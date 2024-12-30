#include "Lights.h"
#include <iostream>

// Constructor
Lights::Lights(const std::string& name, double consumption, const std::string& color, int brightness, NotificationSystem* notifier)
    : Device(name, consumption, notifier), color(color), brightness(brightness) {}

// Set Color
void Lights::setColor(const std::string& newColor) {
    color = newColor;
    if (notifier) {
        notifier->sendNotification(name + " color changed to " + color + ".");
    }
}

// Set Brightness
void Lights::setBrightness(int newBrightness) {
    if (newBrightness >= 0 && newBrightness <= 100) {
        brightness = newBrightness;
        if (notifier) {
            notifier->sendNotification(name + " brightness set to " + std::to_string(brightness) + "%.");
        }
    } else {
        std::cerr << "Brightness must be between 0 and 100.\n";
    }
}

// Show Details
void Lights::showDetails() const {
    std::cout << "Light: " << name << ", Status: " << (isOn ? "On" : "Off")
              << ", Color: " << color << ", Brightness: " << brightness << "%\n";
}
