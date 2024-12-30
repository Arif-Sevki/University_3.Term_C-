#include "Gaius.h"
#include <iostream>
using namespace std;

Gaius::Gaius(int hp, int atk) : maxHealth(hp), health(hp), attackPower(atk) {}


int Gaius::stoneVortex() {
    cout << "Gaius used Stoene Vortex." << endl;
    cout << "A swirling storm of rocks and boulders, trapping enemies within a vortex of crushing stone" << endl;
    int damage = attackPower;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Gaius::terraquakeStrike() {
    cout << "Gaius used Terraquake Strike." << endl;
    cout << "Summons the fury of the earth itself, causing tremors that shatter everything in his path" << endl;
    int damage = attackPower + 20;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Gaius::titansEmbrace() {
    cout << "Gaius used Titan's Embrace." << endl;
    cout << "Encircles his enemies with colossal arms of rock and earth, squeezing the life from them in an unbreakable grip" << endl;
    int damage = attackPower * 5;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}


int Gaius::getMaxHealth() const {
    return maxHealth;
}

int Gaius::getHealth() const {
    return health;
}

int Gaius::getAttackPower() const {
    return attackPower;
}


void Gaius::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    cout << "Gaius took " << damage << " damage. Health: " << health << endl;
}


int Gaius::attack(int roll) {
    switch (roll) {
        case 1: return stoneVortex();
        case 2: return stoneVortex();
        case 3: return stoneVortex();
        case 4: return terraquakeStrike();
        case 5: return terraquakeStrike();
        case 6: return titansEmbrace();
        default: return 0;
    }
}
