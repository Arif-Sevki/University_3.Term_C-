#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;


class DemonKing : public Enemy {
public:
    DemonKing() : Enemy(1120, 80, "King of All Demons") {}

    int attack1() override {
        cout << name << " used Demonic Slash!" << endl;
        return attackPower + 15;
    }

    int attack2() override {
        cout << name << " used Hellfire!" << endl;
        return attackPower * 2;
    }

    int attack3() override {
        cout << name << " used Obliterate!" << endl;
        return attackPower * 3;
    }

    int heal() {
        int healAmount = 30;
        health += healAmount;
        cout << name << " used Dark Restoration and healed for " << healAmount << " HP. Total health: " << health << endl;
        return healAmount;
    }
};
