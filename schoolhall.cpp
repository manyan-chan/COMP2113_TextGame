#include <iostream>
#include "allocate_resource.h"
#include "gameengine.h"
#include "main.h"
using namespace std;

void schoolhall()
{
    if (location_count[4] == 1)
    {
        cout << "You have not visited the school since graduation,You go there and find the some of the equipment has changed.\n"
             << "You spot the grey door on the right hand side of the hall. You go in and find a mask behind the door" << endl;
        resource_amount[2]++;
        return;
    }
    else if (location_count[4] == 2)
    {
        cout << "You go on the stage, you move the things around, and you find a pack of biscuit under the drum.\n"
             << "You are delighted. However, you pick up the things and find it is just a food packaging.\n"
             << "You leave with disappointment." << endl;
        return;
    }
    else if (location_count[4] == 3)
    {
        cout << "You are sad for the last visit: you paid a hard effort and could not find any food. Yet, you decided to give this place a last chance.\n"
             << "\"BANG!\" A large noise suddenly goes in your ears.\n"
             << "You see a man holding a 8 inch knife, you are scared and you start to negotiate with him.\n"
             << "At the end, you are forced to give out half of you food as a condition offer for leaving." << endl;
        if (resource_amount[0] == 0)
        {
            return;
        }
        else
        {
            resource_amount[0]= resource_amount[0] / 2 + resource_amount[0] % 2;
            return;
        }
    }
    else if (location_count[4] > 3)
    {
        cout << "You are reluctant to go to the school hall again after the horrific experience. You decide to choose another place to go." << endl;
        frequency--;
        return;
    }
}