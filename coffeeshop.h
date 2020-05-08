#ifndef coffee
#define coffee

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "allocate_resource.h"
#include "gameengine.h"
#include "main.h"
#include "coffeeshop.h"
using namespace std;

void gameble()
{
    int dice_player, dice_opponent;
    char gamebleYN;
    srand(time(NULL));
    cout << "Gambling Rule:\n"
         << "You and your opponent will roll a dice, who get the higher point wins.\n"
         << "Are you going to gamble? Y/N?" << endl;

    while (true)
    {
    GAME:
        cin >> gamebleYN;
        if (gamebleYN == 'Y')
        {
            if (resource_amount[0] == 0 && resource_amount[1] == 0 && resource_amount[2] == 0){
                cout << "You have nothing to bet! So you leave the coffee shop." << endl;
                return;
            }
            for (int i = 0; i < 3; i++)
            {
                cout << "You have " << resource_amount[i] << " " << resource_list[i] << endl;
            }
            cout << "What are you going to bet?";
            int bet;
            cout << "0 is food, 1 is water, 2 is mask\n"
                 << "Please input your bet. 0/1/2?" << endl;
            while (true)
            {
                cin >> bet;
                if (bet < 0 || bet > 2)
                {
                    cout << "Please try again! 0/1/2?";
                }
                else
                {
                    resource_amount[bet]--;
                REROLL:
                    srand(time(NULL));
                    dice_player = rand() % 6 + 1;
                    dice_opponent = rand() % 6 + 1;

                    if (dice_player > dice_opponent)
                    {
                        cout << "you rolled a " << dice_player << " while your opponent rolled a " << dice_opponent << "\n"
                             << "You win!\n"
                             << "Are you going to play again? Y/N" << endl;
                        resource_amount[bet]++;
                        resource_amount[bet]++;
                        goto GAME;
                    }
                    else if (dice_player < dice_opponent)
                    {
                        cout << "you rolled a " << dice_player << " while your opponent rolled a " << dice_opponent << "\n"
                             << "You lose!\n"
                             << "Are you going to play again? Y/N" << endl;
                        goto GAME;
                    }
                    else if (dice_player == dice_opponent){
                        cout << "you rolled a " << dice_player << " while your opponent rolled a " << dice_opponent << "\n"
                             << "You draw, so you rolled your dice again.\n" << endl;
                        goto REROLL;
                    }
                }
            }
        }
        else if (gamebleYN == 'N')
        {
            cout << "You leave the coffee shop." << endl;
            return;
        }
    }
}
void coffeeshop()
{
    char coffee_mc;
    char gamebleYN;

    if (location_count[2] == 1)
    {
    START:
        location_count[2]++;
        cout << "You arrived at a coffee shop, you see two guards standing at the front door.\n"
             << "Inside the shop, you see people rolling dice for some reason.\n"
             << "You come closer and ask,\" What are they doing?\"\n"
             << "The guards speak in unison,\" One bottle of water to enter.\"\n"
             << "\"No no no,\" you say,\" I just want to know what they are doing!\"\n"
             << "The guards speak in unison again,\" One bottle of water to enter.\"\n\n"

             << "You decide to...\n"
             << "A. Give one water to enter\n"
             << "B. Leave\n\n"
             << "Please enter your choice: A or B\n"
             << "You have " << resource_amount[1] << " " << resource_list[1] << endl;

        while (true)
        {
            cin >> coffee_mc;
            if (coffee_mc == 'A' || coffee_mc == 'B')
            {
                break;
            }
            else
                cout << "Please try again! A/B?" << endl;
        }
        if (coffee_mc == 'A')
        {
            if (resource_amount[1] == 0)
            {
                cout << "You do not have any water!"
                     << "You leave the coffee shop, maybe next time you should come again with some water." << endl;
                return;
            }
            else
            {
                resource_amount[1]--;
                cout << "You give the guards a bottle of water, they open the door for you.\n"
                     << "You realise that this coffee shop is actually a casino where people bet resources.\n"
                     << "Are you going to play some games?\n"
                     << "Y/N?" << endl;
                casino = true;
            }
            while (true)
            {
                cin >> gamebleYN;
                if (gamebleYN == 'Y' || gamebleYN == 'N')
                {
                    break;
                }
                else
                    cout << "Please try again! Y/N?" << endl;
            }
            if (gamebleYN == 'Y')
            {
                gameble();
                return;
            }
            else
            {
                cout << "You leave the coffee shop." << endl;
            }
        }
    }
    else if (casino == true)
    {
        cout << "The guards recognise you and open the door for you immediately. Are you going to play some games?\n"
             << "Y/N" << endl;
        while (true)
        {
            cin >> gamebleYN;
            if (gamebleYN == 'Y' || gamebleYN == 'N')
            {
                break;
            }
            else
                cout << "Please try again! Y/N?" << endl;
        }
        if (gamebleYN == 'Y')
        {
            gameble();
            return;
        }
        else
        {
            cout << "You leave the coffee shop." << endl;
        }
    }
    else
    {
        goto START;
    }
    return;
}

#endif