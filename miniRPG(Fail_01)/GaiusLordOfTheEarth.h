#ifndef GAIUS_H
#define GAIUS_H

#include "Enemy.h"

class GaiusLordOfTheEarth : public Enemy {
public:
    GaiusLordOfTheEarth() : Enemy(880, 64, "Gaius, Lord of the Earth") {}

    int attack1() override;
    int attack2() override;
    int attack3() override;
};

#endif // GAIUS_H
