#include <iostream>
#include <allocate_resource.h>
using namespace std;

void coffeeshop()
{
    bool coffeeshop_bool;
    if (coffeeshop_counter == 0)
    {
        cout << "You arrived at a coffee shop, you see two guards standing at the front door.\n"
             << "Inside the shop, you see people rolling dice for some reason.\n"
             << "You come closer and ask,\" What are they doing?\"\n"
             << "The guards speak in unison,\" One bottle of water to enter.\"\n"
             << "\"No no no,\" you say,\" I just want to know what they are doing!\"\n"
             << "The guards speak in unison again,\" One bottle of water to enter.\"\n\n"

             << "You decide to...\n"
             << "A. Give one water to enter\n"
             << "B. Leave\n\n"
             << "Please enter your choice: A or B"
             << "You have " resource_amount[1] << " " << resource_list[1] << endl;

        char coffee_mc;
        while (true)
        {
            cin >> coffee_mc;
            if (coffee_mc == 'A' || coffee_mc == 'B')
            {
                break;
            }
            else
                cout << "Please try again!" << endl;
        }
        
    }
}
[carsino == true]
You give the guards a bottle of water, they open the door for you.
You realise that this coffee shop is actually a casino where people bet resources.
Are you going to play some games?

Yes [direct to casino.cpp]
No  [direct to option B]

B
You left the casino.

>= 2nd visit && carsino == true
The guards recognise you and open the door for you immediately.
Are you going to play some games?

Yes [direct to casino.cpp]
No  [direct to option B]