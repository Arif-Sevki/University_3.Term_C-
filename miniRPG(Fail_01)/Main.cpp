/*#include <iostream>
#include <assert.h>
#include <cscobj.h>
#include <math.h>
#include <cscobj.h>

using namespace std;

int main()
{
    cout << "The emperor said, \"The demon king and the 4 demon lords want to take over the world. ";
    cout << "Hey hero, defeat them.\" he said." << endl;
    cout << "You, the great hero, set out to fulfill the emperor's wish and protect the oppressed people." << endl;
    cout <<""<< endl;
    cout <<" If you want to defeat the demon king, you need to defeat the 4 demon lords first." << endl;
    cout <<" Defeat demon lords and demon king to save the world." << endl;
    cout <<" LUCK BE WITH YOU." << endl;
    cout <<""<< endl;
    cout << "You have 100 health and 60 attack power." << endl;
    cout << "You can be stronger after defeating the demon lords." << endl;




    return 0;
}*/

#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include "Hero.h"
#include "CalissaLordOfTheFlames.h"
#include "ZelosLordOfTheShadows.h"
#include "RaijinLordOfTheStorms.h"
#include "GaiusLordOfTheEarth.h"
#include "DemonKing.h"

using namespace std;

int rollDice() {
    cout << "Press Enter to roll the dice...";
    cin.ignore();
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));  // Seed the random number generator

    Hero hero(500, 50);  // Initialize hero with 500 HP and 50 attack power
    vector<Enemy*> bosses = {
        new DemonKing(),
        new GaiusLordOfTheEarth(),
        new RaijinLordOfTheStorms(),
        new ZelosLordOfTheShadows(),
        new CalissaLordOfTheFlames()
    };

    cout << "Welcome to the mini RPG!" << endl;

    for (auto boss : bosses) {
        cout << "\nA new challenger appears: " << boss->getName() << endl;
        
        while (hero.getHealth() > 0 && boss->isAlive()) {
            // Hero's turn
            cout << "\nHero's turn (Health: " << hero.getHealth() << ")" << endl;
            int roll = rollDice();
            cout << "You rolled a " << roll << "!" << endl;
            int damage = hero.attack(roll);
            boss->takeDamage(damage);

            if (!boss->isAlive()) break;

            // Boss's turn
            cout << "\n" << boss->getName() << "'s turn (Health: " << boss->getHealth() << ")" << endl;
            int bossAttack = rand() % 3 + 1;
            int bossDamage;
            switch (bossAttack) {
                case 1: bossDamage = boss->attack1(); break;
                case 2: bossDamage = boss->attack2(); break;
                case 3: bossDamage = boss->attack3(); break;
            }
            hero.takeDamage(bossDamage);

            // Special case for Demon King: 25% chance to heal instead of attack
            if (DemonKing* demonKing = dynamic_cast<DemonKing*>(boss)) {
                if (rand() % 4 == 0) {
                    demonKing->heal();
                }
            }
        }

        if (hero.getHealth() <= 0) {
            cout << "\nGame Over! The hero has fallen." << endl;
            break;
        } else {
            cout << "\nVictory! " << boss->getName() << " has been defeated!" << endl;
            
            // Let the user choose between increasing health or attack power
            char choice;
            do {
                cout << "Choose an upgrade: (H)ealth or (A)ttack Power? ";
                cin >> choice;
            } while (choice != 'H' && choice != 'h' && choice != 'A' && choice != 'a');

            if (choice == 'H' || choice == 'h') {
                hero.increaseHealth(100);
            } else {
                hero.increaseAttackPower(10);
            }
        }
    }

    if (hero.getHealth() > 0) {
        cout << "\nCongratulations! You have defeated all the bosses and saved the realm!" << endl;
    }

    // Clean up
    for (auto boss : bosses) {
        delete boss;
    }

    return 0;
}