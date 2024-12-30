#ifndef GAIUS_H
#define GAIUS_H

#include <string>
using namespace std;

class Gaius {
private:
    int maxHealth;
    int attackPower;

public:
    int health;
    Gaius(int hp, int atk);

    
    int stoneVortex();
    int terraquakeStrike();
    int titansEmbrace();
    

    int getMaxHealth() const;
    int getHealth() const;
    int getAttackPower() const;

    
    void takeDamage(int damage);
    int attack(int roll);
};

#endif 
