#ifndef DEMONKING_H
#define DEMONKING_H

#include "Enemy.h"

class DemonKing : public Enemy {
public:
    DemonKing() : Enemy(1120, 80, "King of All Demons") {}

    int attack1() override;
    int attack2() override;
    int attack3() override;
    int heal(); // Demon King has a healing ability
};

#endif // DEMONKING_H
