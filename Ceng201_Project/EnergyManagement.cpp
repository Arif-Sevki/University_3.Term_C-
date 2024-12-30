#include "EnergyManagement.h"
#include <iostream>

// Constructor
EnergyManagement::EnergyManagement(double maxConsumption)
    : currentConsumption(0.0), maxConsumption(maxConsumption), dailyConsumption(0.0) {}

// Cihaz ekleme
void EnergyManagement::addDevice(Device* device) {
    devices.push_back(device);
}

// Anlık enerji tüketimini hesaplama
void EnergyManagement::monitorConsumption() {
    currentConsumption = 0.0;
    for (const auto& device : devices) {
        if (device->getStatus()) {
            currentConsumption += device->getConsumptionPerHour();
        }
    }
}

// Günlük enerji tüketimini hesaplama
void EnergyManagement::calculateDailyConsumption() {
    monitorConsumption();
    dailyConsumption += currentConsumption;
}

// Enerji tüketim sınırı kontrolü
bool EnergyManagement::isOverLimit() const {
    return currentConsumption > maxConsumption;
}

// Enerji raporunu gösterme
void EnergyManagement::showEnergyReport() const {
    std::cout << "\n=== Energy Management Report ===\n";
    std::cout << "Current Consumption: " << currentConsumption << " kWh\n";
    std::cout << "Daily Consumption: " << dailyConsumption << " kWh\n";
    std::cout << "Energy Limit: " << maxConsumption << " kWh\n";
    if (isOverLimit()) {
        std::cout << "Warning: Energy consumption limit exceeded!\n";
    }
}
