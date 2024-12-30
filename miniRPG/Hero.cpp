#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero(int hp, int atk) : maxHealth(hp), health(hp), attackPower(atk) {}


int Hero::earthquakeStomp() {
    cout << "You used Earthquake Stomp." << endl;
    cout << "With a single stomp, the hero shatters the ground," << endl;
    cout << "sending shockwaves that stagger all enemies within reach." << endl;
    int damage = attackPower;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Hero::shadowPiercer() {
    cout << "You used Shadow Piercer." << endl;
    cout << "In a swift, shadowy strike, the hero pierces through the enemy's defenses," << endl;
    cout << "exploiting their weakest point." << endl;
    int damage = attackPower + 20;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Hero::infernoBurst() {
    cout << "You used Inferno Burst." << endl;
    cout << "Unleashing flames from within, the hero engulfs the battlefield in a fiery blaze." << endl;
    int damage = attackPower * 3;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Hero::healingAura() {
    cout << "You used Healing Aura." << endl;
    cout << "A gentle glow surrounds the hero, restoring life and strength." << endl;
    int amount = 50;
    if(health + amount > maxHealth) {
        health = maxHealth;
    }
    else{
        health += amount;
    }
    cout << "You healed " << amount << " HP. Total health: " << health << endl;
    return amount;
}

int Hero::lightningStrike() {
    cout << "You used Lightning Strike." << endl;
    cout << "Calling upon the fury of storms, a bolt of lightning strikes with blinding speed." << endl;
    int damage = attackPower * 4;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}

int Hero::divineSlash() {
    cout << "You used Divine Slash." << endl;
    cout << "With a gleaming blade, the hero delivers a divine strike, vanquishing evil." << endl;
    int damage = attackPower * 5 + 50;
    cout << "You dealt " << damage << " damage." << endl;
    return damage;
}


void Hero::fullRecovered() {
    health = maxHealth;
}
void Hero::increaseMaxHealth(int amount) {
    maxHealth += amount;
    cout << "Max health increased by " << amount << ". Total max health: " << maxHealth << endl;
}
void Hero::increaseHealth(int amount) {
    if(health + amount > maxHealth) {
        health = maxHealth;
    }
    else{
        health += amount;
    }
    cout << "Health increased by " << amount << ". Total health: " << health << endl;
}

void Hero::increaseAttackPower(int amount) {
    attackPower += amount;
    cout << "Attack power increased by " << amount << ". Total attack power: " << attackPower << endl;
}


int Hero::getMaxHealth() const {
    return maxHealth;
}

int Hero::getHealth() const {
    return health;
}

int Hero::getAttackPower() const {
    return attackPower;
}


void Hero::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    cout << "Hero took " << damage << " damage. Health: " << health << endl;
}


int Hero::attack(int roll) {
    switch (roll) {
        case 1: return earthquakeStomp();
        case 2: return shadowPiercer();
        case 3: return infernoBurst();
        case 4: return healingAura();
        case 5: return lightningStrike();
        case 6: return divineSlash();
        default: return 0;
    }
}
