#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Device.h"

class Room {
private:
    std::string name;                  // Oda adı
    std::vector<Device*> devices;      // Cihazların listesi

public:
    // Constructor ve Destructor
    Room(const std::string& name);
    ~Room();

    // Setter ve Getter
    void setName(const std::string& newName);
    std::string getName() const;
    std::vector<Device*> getDevices() const;

    // Metodlar
    void addDevice(Device* device);
    void removeDevice(const std::string& deviceName);  // Yeni metod
    void setLights(const std::string& color, int brightness); // Işıkları ayarlama
    void showDevices() const;                                // Cihazları listeleme
};

#endif // ROOM_H
