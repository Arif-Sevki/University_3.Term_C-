#include "UserManagementSystem.h"
#include <iostream>

// Kullanıcı ekleme
void UserManagementSystem::addUser(const User& user) {
    users.push_back(user);
    std::cout << "User " << user.getName() << " added successfully." << std::endl;
}

// Kullanıcı kaldırma
void UserManagementSystem::removeUser(const std::string& name) {
    for (auto it = users.begin(); it != users.end(); ++it) {
        if (it->getName() == name) {
            users.erase(it);
            std::cout << "User " << name << " removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "User " << name << " not found." << std::endl;
}

// Kullanıcı bulma
User* UserManagementSystem::getUser(const std::string& name) {
    for (auto& user : users) {
        if (user.getName() == name) {
            return &user;
        }
    }
    return nullptr;
}

// Kullanıcıları listeleme
void UserManagementSystem::listUsers() const {
    std::cout << "Registered Users:\n";
    for (const auto& user : users) {
        std::cout << "Name: " << user.getName() << ", Email: " << user.getEmail()
                  << ", Blood Type: " << user.getBloodType()
                  << ", Phone: " << user.getPhoneNumber() << std::endl;
    }
}
