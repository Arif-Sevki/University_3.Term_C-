#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;


class CalissaLordOfTheFlames : public Enemy {
public:
    CalissaLordOfTheFlames() : Enemy(480, 40, "Calissa, Lord of the Flames") {}

    int attack1() override {
        cout << name << " used Flame Burst!" << endl;
        return attackPower + 10;
    }

    int attack2() override {
        cout << name << " used Searing Strike!" << endl;
        return attackPower + 15;
    }

    int attack3() override {
        cout << name << " used Inferno Blaze!" << endl;
        return attackPower * 2;
    }
};
