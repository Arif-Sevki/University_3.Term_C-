#include <iostream>
#include "Hero.h"
#include "Gaius.h"
#include "Zelos.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));  

    cout <<""<< endl;
    cout << "The Great Emperor has summoned you to his presence and said "<< endl;
    cout << "\"The demon king and the 4 demon lords want to destroy the world\""<< endl;
    cout << "\"Hey hero, you must save the world and humanity\""<< endl;
    cout << "\"You must defeat the demon king and the 4 demon lords\""<< endl;
    cout <<""<< endl;
    cout << "Will you accept the Emperor's request? (y for accept)"<< endl;
    char choice;
    cin >> choice;
    if (choice == 'y') {
        cout << ""<< endl;
        cout << "You have accepted the Emperor's request"<< endl;
        cout << "Are you \"The Hero\" who will save the whole world and humanity?"<< endl;
        cout << "There's only one way to find out"<< endl;
        cout << "LUCK BE WITH YOU!!!"<< endl;
        cout << "Press Enter to continue"<< endl;
        cin.ignore();
        cin.get();  
    } else  {
        cout << ""<< endl;
        cout << "You have rejected the king's request"<< endl;
        cout << "You sat and watched humanity and the entire world disappear"<< endl;
        cout << "How PATHETİC"<< endl;
        cout << "GAME OVER"<< endl;
        return 0;
    }

    Hero theHero(100, 30);
    cout << ""<< endl;
    cout << "Before you can defeat the demon king, you must defeat his 4 lords in order."<< endl;
    cout << "You have a 100 health and 30 attack power"<< endl;
    cout << "You can be stronger after winning the battles"<< endl;
    cout << "Press Enter to continue"<< endl;
    cin.ignore();
    cin.get();  
    
    cout << ""<< endl;

    cout <<"You have reached the borders of the empire"<< endl;
    cout <<"Your first opponent is the 4th demon lord, Baron Gaius. Demon Lord Of The Earth"<< endl;
    cout <<"Defeat Gaius and save the empire's lands from decay"<< endl;
    cout <<"Gaius has 300 health and 15 attack power"<< endl;
    cout <<"Press Enter to continue"<< endl;
    cin.ignore();
    cin.get();  
    

    Gaius gaius(300, 15);
    cout << ""<< endl;
    cout << "Baron Gaius stands as a towering figure of stone and iron, ";
    cout << "with a body seemingly carved from ancient mountains, radiating an aura of unyielding strength." << endl;
    cout << "His eyes glow a fierce, earthy green, and every step he takes causes the ground to tremble beneath his immense weight, ";
    cout << "marking his dominion over the very earth itself." << endl;
    cout << "You must defeat him to continue your journey." << endl;
    cout <<"Press Enter to continue"<< endl;
    cin.ignore();
    cin.get();  
    

    while (theHero.health > 0 && gaius.health > 0) {
        cout << "Your health: " << theHero.health << " | Gaius's health: " << gaius.health << endl;
        cout << "Roll your dice to make your first move" << endl;
        cout << "Press Enter to roll the dice" << endl;
        cin.ignore();
        cin.get();  
        
        int roll = rand() % 6 + 1;
        cout << "You rolled a " << roll << endl;
        int damage = theHero.attack(roll);
        gaius.takeDamage(damage);
        if (gaius.health <= 0) {
            cout << "You have defeated Baron Gaius, Demon Lord Of The Earth" << endl;
            cout << "You have saved the empire's lands from decay" << endl;
            cout << "You can choose to increase your health (+50) or attack power (+20)" << endl;
            cout << "Press 1 to increase your health or 2 to increase your attack power" << endl;
            int choice;
            cin >> choice;
            if (choice == 1) {
                theHero.increaseMaxHealth(50);
            } else if (choice == 2) {
                theHero.increaseAttackPower(20);
            }
            theHero.fullRecovered();
            cout << "Your health: " << theHero.health << " | Your attack power: " << theHero.getAttackPower() << endl;
            cout << "Press Enter to continue" << endl;
            cin.ignore();
            cin.get();  
            break;
        }
        cout << "Press Enter to continue"<< endl;
        cin.ignore();
        cin.get();  

        roll = rand() % 6 + 1;
        cout<<""<< endl;
        cout << "Gaius rolled a " << roll << endl;
        damage = gaius.attack(roll);
        theHero.takeDamage(damage);
        if (theHero.health <= 0) {
            cout << "You have been killed by Baron Gaius, Demon Lord Of The Earth" << endl;
            cout << "Humanity was completely wiped out. Only demons live in the world now" << endl;
            cout << "The emperor's dying words were: I wish I could find a real hero"<< endl;
            cout << "You are not a Hero just a Trash " << endl;
            cout << "GAME OVER" << endl;
            break;
        }
    }

    if (theHero.health <= 0) {
        return 0;
    }

    cout << ""<< endl;
    cout << "The imperial army advanced to capture the 4th Demon Lord's territory"<< endl;
    cout << "The hero returned to the palace to prepare for the next fight."<< endl;
    cout << "Press Enter to continue"<< endl;
    cin.ignore();
    cin.get(); 


    cout << ""<< endl;
    cout <<"You have reached The Forest Of The Storm"<< endl;
    cout <<"Your second opponent is the 3rd demon lord, Count Zelos. Demon Lord Of The Storm"<< endl;
    cout <<"Defeat Zelos and save the empire's people from the storm"<< endl;
    cout <<"Zelos has 550 health and 25 attack power"<< endl;
    cout <<"Press Enter to continue"<< endl;
    cin.ignore();
    cin.get();

    Zelos zelos(550, 25);
    cout << ""<< endl;
    cout << "Count Zelos stands as a figure of pure, crackling energy, ";
    cout << "his form wreathed in the power of the storm, his eyes flashing with the fury of a thousand lightning bolts." << endl;
    cout << "Every step he takes sends arcs of electricity crackling through the air, ";
    cout << "marking his dominion over the very skies themselves." << endl;
    cout << "You must defeat him to continue your journey." << endl;
    cout <<"Press Enter to continue"<< endl;
    cin.ignore();
    cin.get();

     while (theHero.health > 0 && zelos.health > 0) {
        cout << "" << endl;
        cout << "Your health: " << theHero.health << " | Zelos's health: " << zelos.health << endl;
        cout << "Roll your dice to make your first move" << endl;
        cout << "Press Enter to roll the dice" << endl;
        cin.ignore();
        cin.get();  
        
        int roll = rand() % 6 + 1;
        cout << "You rolled a " << roll << endl;
        int damage = theHero.attack(roll);
        zelos.takeDamage(damage);
        if (zelos.health <= 0) {
            cout << "You have defeated Count Zelos, Demon Lord Of The Storm" << endl;
            cout << "The storm clouds over the empire dispersed and the people were saved from floods and high winds" << endl;
            cout << "You can choose to increase your health (+50) or attack power (+20)" << endl;
            cout << "Press 1 to increase your health or 2 to increase your attack power" << endl;
            int choice;
            cin >> choice;
            if (choice == 1) {
                theHero.increaseMaxHealth(50);
            } else if (choice == 2) {
                theHero.increaseAttackPower(20);
            }
            theHero.fullRecovered();
            cout << "Your health: " << theHero.health << " | Your attack power: " << theHero.getAttackPower() << endl;
            cout << "Press Enter to continue" << endl;
            cin.ignore();
            cin.get();  
            break;
        }
        cout << "Press Enter to continue"<< endl;
        cin.ignore();
        cin.get();  

        roll = rand() % 6 + 1;
        cout<<""<< endl;
        cout << "Zelos rolled a " << roll << endl;
        damage = zelos.attack(roll);
        theHero.takeDamage(damage);
        if (theHero.health <= 0) {
            cout << "You have been killed by Count Zelos, Demon Lord Of The Storm" << endl;
            cout << "Humanity was completely wiped out. Only demons live in the world now" << endl;
            cout << "Before humanity was wiped out, there were very few people who remembered you"<< endl;
            cout << "You are a failed hero" << endl;
            cout << "GAME OVER" << endl;
            break;
        }
    }

    if (theHero.health <= 0) {
        return 0;
    }













    return 0;
}
