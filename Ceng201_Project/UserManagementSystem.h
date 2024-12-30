#ifndef USERMANAGEMENTSYSTEM_H
#define USERMANAGEMENTSYSTEM_H

#include "User.h"
#include <vector>
#include <string>

class UserManagementSystem {
private:
    std::vector<User> users;

public:
    // Metodlar
    void addUser(const User& user);
    void removeUser(const std::string& name);
    User* getUser(const std::string& name);
    void listUsers() const;
};

#endif // USERMANAGEMENTSYSTEM_H
