#ifndef HOME_H
#define HOME_H

#include <string>
#include <vector>
#include "Room.h"

class Home {
private:
    std::string address;             // Ev adresi
    std::vector<Room*> rooms;        // Odaların listesi

public:
    // Constructor ve Destructor
    Home(const std::string& address);
    ~Home();

    // Setter ve Getter
    void setAddress(const std::string& newAddress);
    std::string getAddress() const;
    std::vector<Room*> getRooms() const;

    // Metodlar
    void addRoom(Room* room);
    void showRooms() const; // Evdeki tüm odaları ve cihazları göster
};

#endif // HOME_H
