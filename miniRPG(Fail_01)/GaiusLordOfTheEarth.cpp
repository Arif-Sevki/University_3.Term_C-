#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;

class GaiusLordOfTheEarth : public Enemy {
public:
    GaiusLordOfTheEarth() : Enemy(880, 64, "Gaius, Lord of the Earth") {}

    int attack1() override {
        cout << name << " used Earthquake!" << endl;
        return attackPower + 10;
    }

    int attack2() override {
        cout << name << " used Rock Smash!" << endl;
        return attackPower + 15;
    }

    int attack3() override {
        cout << name << " used Mountain Crush!" << endl;
        return attackPower * 2;
    }
};
