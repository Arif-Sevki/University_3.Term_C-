#include "Home.h"
#include <iostream>

// Constructor
Home::Home(const std::string& address) : address(address) {}

// Destructor
Home::~Home() {
    for (Room* room : rooms) {
        delete room;
    }
}

// Setter
void Home::setAddress(const std::string& newAddress) {
    address = newAddress;
}

// Getter
std::string Home::getAddress() const {
    return address;
}

std::vector<Room*> Home::getRooms() const {
    return rooms;
}

// Oda ekleme
void Home::addRoom(Room* room) {
    rooms.push_back(room);
}

// Evdeki odaları gösterme
void Home::showRooms() const {
    for (const auto& room : rooms) {
        std::cout << "Room: " << room->getName() << "\n";
        room->showDevices();
    }
}
