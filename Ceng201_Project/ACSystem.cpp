#include "ACSystem.h"
#include <iostream>

// Constructor
ACSystem::ACSystem(const std::string& name, double consumption, double temperature, int fanSpeed, NotificationSystem* notifier)
    : Device(name, consumption, notifier), temperature(temperature), fanSpeed(fanSpeed) {}

// Set Temperature
void ACSystem::setTemperature(double newTemperature) {
    temperature = newTemperature;
    if (notifier) {
        notifier->sendNotification(name + " temperature set to " + std::to_string(temperature) + ".");
    }
}

// Set Fan Speed
void ACSystem::setFanSpeed(int newSpeed) {
    fanSpeed = newSpeed;
    if (notifier) {
        notifier->sendNotification(name + " fan speed set to " + std::to_string(fanSpeed) + ".");
    }
}

// Show Details
void ACSystem::showDetails() const {
    std::cout << "AC: " << name << ", Status: " << (isOn ? "On" : "Off")
              << ", Temperature: " << temperature
              << ", Fan Speed: " << fanSpeed << "\n"; // Satır sonuna \n eklendi
}

