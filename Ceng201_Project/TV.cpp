#include "TV.h"
#include <iostream>

// Constructor
TV::TV(const std::string& name, double consumption, int channel, int volume, NotificationSystem* notifier)
    : Device(name, consumption, notifier), channel(channel), volume(volume) {}

// Set Channel
void TV::setChannel(int newChannel) {
    channel = newChannel;
    if (notifier) {
        notifier->sendNotification(name + " channel changed to " + std::to_string(channel) + ".");
    }
}

// Set Volume
void TV::setVolume(int newVolume) {
    volume = newVolume;
    if (notifier) {
        notifier->sendNotification(name + " volume set to " + std::to_string(volume) + "%.");
    }
}

// Show Details
void TV::showDetails() const {
    std::cout << "TV: " << name << ", Status: " << (isOn ? "On" : "Off")
              << ", Channel: " << channel << ", Volume: " << volume << "%\n";
}
