#ifndef CALISSA_H
#define CALISSA_H

#include "Enemy.h"

class CalissaLordOfTheFlames : public Enemy {
public:
    CalissaLordOfTheFlames() : Enemy(480, 40, "Calissa, Lord of the Flames") {}

    int attack1() override;
    int attack2() override;
    int attack3() override;
};

#endif // CALISSA_H
