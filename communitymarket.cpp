#include <iostream>
#include "allocate_resource.h"
#include "gameengine.h"
#include "main.h"
using namespace std;

void communitymarket()
{
    if (location_count[7] == 1)
    {
        cout << "This is your first visit to the community market after the apocalypse, you see a lot of merchants here.\n"
             << "You can trade resources here, however, you have to give three items to get one in return." << endl;
        //unfair shop 
        return;
    }
    else if (location_count[7] > 1)
    {
        //unfair shop
    }
