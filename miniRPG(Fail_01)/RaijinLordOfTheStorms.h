#ifndef RAIJIN_H
#define RAIJIN_H

#include "Enemy.h"

class RaijinLordOfTheStorms : public Enemy {
public:
    RaijinLordOfTheStorms() : Enemy(720, 56, "Raijin, Lord of the Storms") {}

    int attack1() override;
    int attack2() override;
    int attack3() override;
};

#endif // RAIJIN_H
