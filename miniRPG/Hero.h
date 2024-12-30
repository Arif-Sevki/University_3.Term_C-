#ifndef HERO_H
#define HERO_H

#include <string>
using namespace std;

class Hero {
private:
    int maxHealth;
    int attackPower;

public:
    int health;
    Hero(int hp, int atk);

    
    int earthquakeStomp();
    int shadowPiercer();
    int infernoBurst();
    int healingAura();
    int lightningStrike();
    int divineSlash();

    void fullRecovered();
    void increaseMaxHealth(int amount);
    void increaseHealth(int amount);
    void increaseAttackPower(int amount);

    int getMaxHealth() const;
    int getHealth() const;
    int getAttackPower() const;

    
    void takeDamage(int damage);
    int attack(int roll);
};

#endif 