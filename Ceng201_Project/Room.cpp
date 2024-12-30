#include "Room.h"
#include "Lights.h"
#include <iostream>

// Constructor
Room::Room(const std::string& name) : name(name) {}

// Destructor
Room::~Room() {
    for (Device* device : devices) {
        delete device;
    }
}

// Setter
void Room::setName(const std::string& newName) {
    name = newName;
}

// Getter
std::string Room::getName() const {
    return name;
}

std::vector<Device*> Room::getDevices() const {
    return devices;
}

// Cihaz ekleme
void Room::addDevice(Device* device) {
    devices.push_back(device);
}

// Cihaz silme
void Room::removeDevice(const std::string& deviceName) {
    for (auto it = devices.begin(); it != devices.end(); ++it) {
        if ((*it)->getName() == deviceName) {
            delete *it;  // Belleği temizle
            devices.erase(it);  // Listeden kaldır
            std::cout << "Device \"" << deviceName << "\" removed from the room.\n";
            return;
        }
    }
    std::cout << "Device \"" << deviceName << "\" not found in the room.\n";
}

// Işıkları ayarlama
void Room::setLights(const std::string& color, int brightness) {
    for (Device* device : devices) {
        Lights* light = dynamic_cast<Lights*>(device); // Işık cihazı olup olmadığını kontrol et
        if (light) {
            light->setColor(color);
            light->setBrightness(brightness);
        }
    }
}

// Cihazları gösterme
void Room::showDevices() const {
    for (const auto& device : devices) {
        device->showDetails();
    }
}
