#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include <string>
#include <iostream>

class SecuritySystem {
private:
    std::string version;   // Güvenlik sistemi versiyonu
    bool sensorStatus;     // Sensör durumu (aktif/pasif)

public:
    // Constructor
    SecuritySystem(const std::string& version);

    // Metodlar
    void activateSensor();
    void deactivateSensor();
    bool checkSensorStatus() const;
    void showSystemStatus() const;
};

#endif // SECURITYSYSTEM_H
