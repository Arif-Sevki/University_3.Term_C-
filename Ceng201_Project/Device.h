#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include "NotificationSystem.h"

class Device {
protected:
    std::string name;               // Cihaz adı
    bool isOn;                      // Cihaz açık mı?
    double consumptionPerHour;      // Enerji tüketimi (kWh)
    NotificationSystem* notifier;   // Bildirim sistemi

public:
    // Constructor ve Destructor
    Device(const std::string& name, double consumption, NotificationSystem* notifier);
    virtual ~Device();

    // Setter ve Getter
    void setName(const std::string& newName);
    std::string getName() const;
    bool getStatus() const;
    double getConsumptionPerHour() const;

    // Cihaz kontrol metodları
    virtual void turnOn();
    virtual void turnOff();

    // Soyut metod (override edilecek)
    virtual void showDetails() const = 0;
};

#endif // DEVICE_H
