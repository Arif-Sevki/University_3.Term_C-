#ifndef ENERGYMANAGEMENT_H
#define ENERGYMANAGEMENT_H

#include <vector>
#include "Device.h"

class EnergyManagement {
private:
    double currentConsumption;      // Anlık enerji tüketimi
    double maxConsumption;          // Enerji tüketim sınırı
    double dailyConsumption;        // Günlük toplam enerji tüketimi
    std::vector<Device*> devices;   // Takip edilen cihazlar

public:
    // Constructor
    EnergyManagement(double maxConsumption);

    // Cihaz ekleme
    void addDevice(Device* device);

    // Enerji tüketimi hesaplama
    void monitorConsumption();
    void calculateDailyConsumption();

    // Getter metodları
    double getCurrentConsumption() const;
    double getDailyConsumption() const;

    // Enerji tüketim limit kontrolü
    bool isOverLimit() const;

    // Raporlama
    void showEnergyReport() const;
};

#endif // ENERGYMANAGEMENT_H
