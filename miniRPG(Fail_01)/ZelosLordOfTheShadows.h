#ifndef ZELOS_H
#define ZELOS_H

#include "Enemy.h"

class ZelosLordOfTheShadows : public Enemy {
public:
    ZelosLordOfTheShadows() : Enemy(600, 48, "Zelos, Lord of the Shadows") {}

    int attack1() override;
    int attack2() override;
    int attack3() override;
};

#endif // ZELOS_H
