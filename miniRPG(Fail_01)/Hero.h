#ifndef HERO_H
#define HERO_H

#include <string>
using namespace std;

class Hero {
private:
    int health;
    int attackPower;

public:
    Hero(int hp, int atk);

    
    int earthquakeStomp();
    int shadowPiercer();
    int infernoBurst();
    int healingAura();
    int lightningStrike();
    int divineSlash();

   
    void increaseHealth(int amount);
    void increaseAttackPower(int amount);

    
    int getHealth() const;
    int getAttackPower() const;

    
    void takeDamage(int damage);
    int attack(int roll);
};

#endif // HERO_H
