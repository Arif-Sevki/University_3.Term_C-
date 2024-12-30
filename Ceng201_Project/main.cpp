#include <iostream>
#include "Home.h"
#include "Lights.h"
#include "ACSystem.h"
#include "TV.h"
#include "Curtains.h"
#include "NotificationSystem.h"
#include "UserManagementSystem.h"
#include "EnergyManagement.h"
#include "SecuritySystem.h"

int main() {
    // ========================= User Management =========================
    std::cout << "=== User Management System ===\n";
    UserManagementSystem userSystem;

    // Kullanıcıları ekle
    userSystem.addUser(User("John Doe", "john@example.com", "O+", 123456789, "password123"));
    userSystem.addUser(User("Jane Smith", "jane@example.com", "A-", 987654321, "secure456"));

    // Kullanıcıları listele
    userSystem.listUsers();

    // Bildirim sistemi başlat
    NotificationSystem notify("Admin");
    notify.sendNotification("Welcome to the Smart Home System!");

    // ========================= Home Setup =========================
    std::cout << "\n=== Home Setup ===\n";
    Home myHome("1234 Elm Street");
    std::cout << "Home address: " << myHome.getAddress() << "\n";

    // Adresi güncelle
    myHome.setAddress("5678 Oak Avenue");
    std::cout << "Updated home address: " << myHome.getAddress() << "\n";

    // Odaları oluştur
    Room* livingRoom = new Room("Living Room");
    Room* bedroom = new Room("Bedroom");

    // Living Room cihazları
    Lights* livingRoomLight = new Lights("Living Room Light", 60.0, "Warm White", 75, &notify);
    TV* livingRoomTV = new TV("Living Room TV", 100.0, 5, 50, &notify);

    // Bedroom cihazları
    ACSystem* bedroomAC = new ACSystem("Bedroom AC", 200.0, 24.0, 3, &notify);
    Curtains* bedroomCurtains = new Curtains("Bedroom Curtains", 5.0, 50, &notify);

    // ========================= Energy Management =========================
    EnergyManagement energyManager(300.0); // Maksimum enerji tüketimi 300 kWh
    energyManager.addDevice(livingRoomLight);
    energyManager.addDevice(livingRoomTV);
    energyManager.addDevice(bedroomAC);

    // Enerji tüketimini hesapla
    std::cout << "\n=== Monitoring Energy Consumption ===\n";
    livingRoomLight->turnOn();
    livingRoomTV->turnOn();
    bedroomAC->turnOn();

    energyManager.monitorConsumption();
    energyManager.calculateDailyConsumption();
    energyManager.showEnergyReport();

    // Sınır aşıldıysa bildirim gönder
    if (energyManager.isOverLimit()) {
        notify.sendNotification("Warning: Energy consumption limit exceeded!");
    }

    // ========================= Security System =========================
    std::cout << "\n=== Security System ===\n";
    SecuritySystem security("v1.0");
    security.activateSensor();
    security.showSystemStatus();

    // ========================= Device Management =========================
    std::cout << "\n=== Managing Living Room Devices ===\n";
    livingRoomLight->setColor("Cool White");
    livingRoomLight->setBrightness(80);
    livingRoomLight->showDetails();

    livingRoomTV->setChannel(10);
    livingRoomTV->setVolume(75);
    livingRoomTV->showDetails();

    std::cout << "\n=== Managing Bedroom Devices ===\n";
    bedroomAC->setTemperature(22.0);
    bedroomAC->setFanSpeed(4);
    bedroomAC->showDetails();

    bedroomCurtains->setLevel(70);
    bedroomCurtains->turnOn();
    bedroomCurtains->showDetails();

    // Cihazları odalara ekle
    livingRoom->addDevice(livingRoomLight);
    livingRoom->addDevice(livingRoomTV);
    bedroom->addDevice(bedroomAC);
    bedroom->addDevice(bedroomCurtains);

    // Odaları eve ekle
    myHome.addRoom(livingRoom);
    myHome.addRoom(bedroom);

    // ========================= Device Deletion =========================
    std::cout << "\n=== Removing Devices ===\n";
    std::cout << "Removing 'Living Room Light' from Living Room...\n";
    livingRoom->removeDevice("Living Room Light");

    std::cout << "Removing 'Bedroom AC' from Bedroom...\n";
    bedroom->removeDevice("Bedroom AC");

    // Cihaz silindikten sonra bildirim gönder
    notify.sendNotification("A device has been removed from the room.");

    // Güncellenmiş odaları göster
    std::cout << "\n=== Updated Devices in Living Room ===\n";
    livingRoom->showDevices();

    std::cout << "\n=== Updated Devices in Bedroom ===\n";
    bedroom->showDevices();

    // ========================= Lights Update =========================
    std::cout << "\n=== Updating Lights in All Rooms ===\n";
    livingRoom->setLights("Daylight White", 100);
    livingRoom->showDevices();

    // ========================= Home Overview =========================
    std::cout << "\n=== Smart Home Overview ===\n";
    myHome.showRooms();

    // Kullanıcıya bir bildirim gönder
    notify.sendNotification("All systems are running smoothly.");

    // ========================= Memory Cleanup =========================
    delete livingRoom;
    delete bedroom;

    return 0;
}

// çalıştırmak için terminalde:
//g++ main.cpp Device.cpp Lights.cpp ACSystem.cpp TV.cpp Curtains.cpp Room.cpp Home.cpp EnergyManagement.cpp SecuritySystem.cpp User.cpp UserManagementSystem.cpp NotificationSystem.cpp -o SmartHome
// ./SmartHome veya .\SmartHome.exe

