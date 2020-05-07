#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <main.h>
#include <gameengine.h>

using namespace std;

void convenientstore()
{
    char choice;
    if (location_count[3] == 1)
    {
        cout << "You find some food in the convenient store.\n"
             << "food +1!" << endl;
        resource_amount[0]++;
        return;
    }
    else if (location_count[3] == 2)
    {
        cout << "You see a lady scouting the convenient store, she left soon but she has accidentally left a bottle of water at the counter.\n"
             << "After struggling a while, thirst defeats your rationality and you take away the bottle feeling guilty." << endl;
        resource_amount[1]++;
        return;
    }
    else if (location_count[3] == 3)
    {
        cout << "A group of gangsters see you in the convenient store, they are armed heavily.\n"
             << "You run away knowing that there is no way you can defeat them.\n"
             << "Yet, you still got surrounded.\n"
             << "You decide to...A/B?\n"
             << "A. beg for mercy (Resource that you have the most will minus two)\n"
             << "B. intimidate them (50% to success, 50% to lose one food and one water)" << endl;
        while (true)
        {
            cin >> choice;
            if (choice == 'A' || choice == 'B')
            {
                break;
            }
            else
                cout << "Please try again! A/B?";
        }
        if (choice == 'A')
        {
            int item = 0;
            for (int i = 0; i < 3; i++)
            {
                if (resource_amount[i] > item)
                    item = i;
            }
            cout << "You beg for mercy, the gangster spare you lucky.\n"
                 << "They see you have got a lot of " << resource_list[item] << ". So they take away two." << endl;
            resource_amount[item]--;
            resource_amount[item]--;
            if (resource_amount[item] < 0)
            {
                resource_amount[item] = 0; //prevent negative num
            }
        }
        else
        {
            srand(time(NULL));
            int prob = rand() % 2;
            if (prob == 1)
            {
                cout << "You successfully intimidate the gangster by telling them that your dad is Winnie the Pooh, a famous celebrity in the chaotic era.\n"
                     << "They let you go with peace." << endl;
            }
            else
            {
                cout << "You tell them your mum is fat, but they ain't scared of your fat mother."
                     << "They take away one food and one water from you." << endl;
                resource_amount[0]--;
                resource_amount[1]--;
                if (resource_amount[0] < 0)
                {
                    resource_amount[0] = 0; //prevent negative num
                }
                if (resource_amount[1] < 0)
                {
                    resource_amount[1] = 0; //prevent negative num
                }
            }
        }
        return;
    }
    else if (location_count[3] > 3)
    {
        cout << "You find nothing interesting. You decide not to come here again." << endl;
        return;
    }
}