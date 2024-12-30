#ifndef ZELOS_H
#define ZELOS_H

#include <string>
using namespace std;

class Zelos {
private:
    int maxHealth;
    int attackPower;

public:
    int health;
    Zelos(int hp, int atk);

    
    int stormclashFury();
    int tempestsGrasp();
    int eyeOfTheStorm();
    

    int getMaxHealth() const;
    int getHealth() const;
    int getAttackPower() const;

    
    void takeDamage(int damage);
    int attack(int roll);
};

#endif 
