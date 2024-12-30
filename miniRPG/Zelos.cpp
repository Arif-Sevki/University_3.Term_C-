#include "Zelos.h"
#include <iostream>
using namespace std;

Zelos::Zelos(int hp, int atk) : maxHealth(hp), health(hp), attackPower(atk) {}


int Zelos::stormclashFury() {
    cout << "Zelos used Stormclash Fury." << endl;
    cout << "The wind itself turns into Zelos’s weapon, wrapping around his enemies like a sentient," << endl;
    cout << "crushing hand, tightening with the force of a thousand storms" << endl;

    int damage = attackPower;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Zelos::tempestsGrasp() {
    cout << "Zelos used Tempests Grasp." << endl;
    cout << "His hands crackle with storm energy as he slams the ground, causing a shockwave of thunder" << endl;
    cout << "that shatters the very air, leaving a trail of devastating winds in its wake." << endl;
    int damage = attackPower + 25;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Zelos::eyeOfTheStorm() {
    cout << "Zelos used Eye of the Storm." << endl;
    cout << "Zelos summons a perfect eye in the center of a raging storm, a momentary calm where no soul is safe," << endl;
    cout << "as the storm's fury gathers strength to consume all who dare enter."<< endl;
    int damage = attackPower * 5;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}


int Zelos::getMaxHealth() const {
    return maxHealth;
}

int Zelos::getHealth() const {
    return health;
}

int Zelos::getAttackPower() const {
    return attackPower;
}


void Zelos::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    cout << "Gaius took " << damage << " damage. Health: " << health << endl;
}


int Zelos::attack(int roll) {
    switch (roll) {
        case 1: return stormclashFury();
        case 2: return stormclashFury();
        case 3: return stormclashFury();
        case 4: return tempestsGrasp();
        case 5: return tempestsGrasp();
        case 6: return eyeOfTheStorm();
        default: return 0;
    }
}
