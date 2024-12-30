#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;

class ZelosLordOfTheShadows : public Enemy {
public:
    ZelosLordOfTheShadows() : Enemy(600, 48, "Zelos, Lord of the Shadows") {}

    int attack1() override {
        cout << name << " used Dark Slash!" << endl;
        return attackPower + 5;
    }

    int attack2() override {
        cout << name << " used Shadow Strike!" << endl;
        return attackPower + 10;
    }

    int attack3() override {
        cout << name << " used Night Terror!" << endl;
        return attackPower * 2;
    }
};