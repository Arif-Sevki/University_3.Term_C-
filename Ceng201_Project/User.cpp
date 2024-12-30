#include "User.h"

// Constructor
User::User(const std::string& name, const std::string& email, const std::string& bloodType,
           int phoneNumber, const std::string& password)
    : name(name), email(email), bloodType(bloodType), phoneNumber(phoneNumber), password(password) {}

// Getter metodları
std::string User::getName() const { return name; }
std::string User::getEmail() const { return email; }
std::string User::getBloodType() const { return bloodType; }
int User::getPhoneNumber() const { return phoneNumber; }

// Setter metodları
void User::setName(const std::string& newName) { name = newName; }
void User::setEmail(const std::string& newEmail) { email = newEmail; }
void User::setPhoneNumber(int newPhoneNumber) { phoneNumber = newPhoneNumber; }
