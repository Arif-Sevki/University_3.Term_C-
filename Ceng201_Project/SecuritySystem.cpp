#include "SecuritySystem.h"

// Constructor
SecuritySystem::SecuritySystem(const std::string& version)
    : version(version), sensorStatus(false) {}

// Sensörleri aktive etme
void SecuritySystem::activateSensor() {
    sensorStatus = true;
    std::cout << "Security sensors activated.\n";
}

// Sensörleri devre dışı bırakma
void SecuritySystem::deactivateSensor() {
    sensorStatus = false;
    std::cout << "Security sensors deactivated.\n";
}

// Sensör durumunu kontrol etme
bool SecuritySystem::checkSensorStatus() const {
    return sensorStatus;
}

// Güvenlik sisteminin durumunu gösterme
void SecuritySystem::showSystemStatus() const {
    std::cout << "\n=== Security System Status ===\n";
    std::cout << "Version: " << version << "\n";
    std::cout << "Sensor Status: " << (sensorStatus ? "Active" : "Inactive") << "\n";
}
