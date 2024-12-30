#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    std::string email;
    std::string bloodType;
    int phoneNumber;
    std::string password;

public:
    // Constructor
    User(const std::string& name, const std::string& email, const std::string& bloodType,
         int phoneNumber, const std::string& password);

    // Getter metodları
    std::string getName() const;
    std::string getEmail() const;
    std::string getBloodType() const;
    int getPhoneNumber() const;

    // Setter metodları
    void setName(const std::string& newName);
    void setEmail(const std::string& newEmail);
    void setPhoneNumber(int newPhoneNumber);
};

#endif // USER_H
