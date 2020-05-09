#ifndef super
#define super

#include <iostream>
#include <vector>
#include "allocate_resource.h"
#include "gameengine.h"
#include "main.h"
using namespace std;

void supermarket()
{
    string supermarket_choice;
    string trade;
    if (location_count[0] == 1)
    {
        cout << "You arrived the supermarket, you find that the shop is guarded by a group of men equipped with knifes.\n"
             << "When you walked near them, a muscular man who seems to be the leader walked to you and shouted,\n"
             << "\"Who the hell are you, GET OFF! Or else I will cut you into pieces.\"\n"
             << "Meanwhile, he pull a kitchen knife from his waist.\n"
             << "You decide to...\n"
             << "A. Escape\n"
             << "B. Negotiate with him\n"
             << "C. Pull out a (toy) gun to threaten him\n"
             << "A/B/C?" << endl;
        while (true)
        {
            cin >> supermarket_choice;
            if (supermarket_choice == "A" || supermarket_choice == "B" || supermarket_choice == "C")
                break;
            else
                cout << "please try again! A/B/C?" << endl;
        }
        if (supermarket_choice == "A")
        {

            cout << "You fleed from the dangerous situation, the men seems to stop chasing you after you have leave their territory" << endl;
            return;
        }
        else if (supermarket_choice == "B")
        {
            cout << "Calm down! I come here with no harm,\" You put your hands in the air and say,\" I just want to trade with you guys\n"
                 << "\"hmmm... We have some excess food and water,\" he put away his knife as he speaks,\" We want first aid kit desperately.\""
                 << "Do you want to trade with him? Y/N?\n"
                 << "You have " << resource_amount[5] << " first aids" << endl;
            while (true)
            {

                cin >> trade;
                if (trade == "Y" || trade == "N")
                    break;
                else
                    cout << "please try again! Y/N?" << endl;
            }
            if (trade == "Y")
            {
                if (resource_amount[5] == 0)
                {
                    cout << " You searched your bag and realised you have no first aid, so you leave the supermarket without making any trouble" << endl;
                    return;
                }
                else
                {
                    resource_amount[5]--;
                    resource_amount[0]++;
                    resource_amount[1]++;
                    cout << "You gained one food and one water in exchange for a first aid kit." << endl;
                    return;
                }
            }
            else
            {
                cout << "You rejected the offer and left." << endl;
                return;
            }
        }
        else if (supermarket_choice == "C")
        {
            if (resource_amount[4] == 1)
            {
                cout << "\"PUT YOUR WEAPON DOWN\" You yelled,\" I DON'T WANT TO HURT ANY OF YOU\"\n"
                     << "Despite his tough appearance, the man seems to be a coward, he throw away his weapon and beg for mercy."
                     << "You take away their resources as your reward"
                     << "You gain food, water and mask" << endl;
                resource_amount[0]++;
                resource_amount[1]++;
                resource_amount[2]++;
                sentiment_count--;
                return;
            }
            else
            {
                cout << "You don't have a (toy) gun :("
                     << "You fleed from the dangerous situation, the men seems to stop chasing you after you have leave their territory" << endl;
                return;
            }
        }
    }

    else if (location_count[0] == 2)
    {
        cout << "You come to the supermarket again, there seems to be nobody around unlike last time.\n"
             << "You walked around the supermarket, however, there are no resources left.\n"
             << "Suddenly, you heard a loud noise, you hide behind a corner and peek.\n"
             << "You see a little boy who fell down onto the ground fainted. According to observation, he does not wear a mask.\n"
             << "You decide to... A/B?\n"
             << "A. Save him\n"
             << "B. Ignore him" << endl;

        while (true)
        {
            cin >> supermarket_choice;
            if (supermarket_choice == "A" || supermarket_choice == "B")
                break;
            else
                cout << "please try again! A/B?" << endl;
        }
        if (supermarket_choice == "A")
        {
            if (resource_amount[2] > 0)
            {
                resource_amount[2]--;
                cout << "You help the kid wear a mask, you place him at a safe place and leave." << endl;
                save_boy = true;
                return;
            }
            else
            {
                cout << "You have no masks, so you leave the supermarket." << endl;
                return;
            }
        }
        else
        {
            cout << "You do not want to use your precious mask to help the boy, you leave." << endl;
            return;
        }
    }
    else if (location_count[0] == 3)
    {
        if (save_boy == true)
        {
            cout << "You saw a boy with his parents, the boy looks familiar to you.\n"
                 << "They give you some masks, you gladly receive them.\n"
                 << "mask +2!" << endl;
            return;
        }
        else
        {
            cout << "Nothing happens, you think you should go to another places." << endl;
            return;
        }
    }
    else
    {
        cout << "Nothing happens, you think you should go to another places. Please choose another place to go!" << endl;
        frequency--;
        return;
    }
}

#endif