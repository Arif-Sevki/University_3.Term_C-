#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;
 
class RaijinLordOfTheStorms : public Enemy {
public:
    RaijinLordOfTheStorms() : Enemy(720, 56, "Raijin, Lord of the Storms") {}

    int attack1() override {
        cout << name << " used Thunder Clap!" << endl;
        return attackPower + 8;
    }

    int attack2() override {
        cout << name << " used Lightning Strike!" << endl;
        return attackPower * 2;
    }

    int attack3() override {
        cout << name << " used Storm Fury!" << endl;
        return attackPower * 3;
    }
};
