#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Enemy.h"
#include <ostream>
#include <iostream>
using namespace std;


class Enemy {
protected:
    int health;
    int attackPower;
    string name;

public:
   
    Enemy(int hp, int atk, const string& enemyName);

    
    virtual int attack1();
    virtual int attack2();
    virtual int attack3();

   
    int getHealth() const;
    int getAttackPower() const;

    
    void takeDamage(int damage);
    bool isAlive() const;

    
    string getName() const;

    
    virtual ~Enemy() = default;
};

#endif // ENEMY_H
