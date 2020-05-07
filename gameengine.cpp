#include <iostream>
#include <fstream>
#include <string>
#include "allocate_resource.h"
#include "coffeeshop.h"
#include "supermarket.h"
#include "convenientstore.h"
#include "main.h"
using namespace std;

//------------------------------------------------------------------------------------------------------------//

//cases
// A is supermarket
// B is hospital
// C is coffee shop
// D is convenient store
// E is school hall
// F is chemistry laboratory
// G is lawn
// H is community market

void game_engine()
{

    for (int day = 0; day < 7; day++)
    {
        for (int frequency = 0; frequency < 3; frequency++)
        {
            char cases;

            switch (cases)
            {
            case ('A'):
                supermarket();
                location_count[0]++;
                break;
            case ('B'):
                hospital();
                location_count[1]++;
                break;
            case ('C'):
                coffeeshop();
                location_count[2]++;
                break;
            case ('D'):
                convenientstore();
                location_count[3]++;
                break;
            case ('E'):
                schoolhall();
                location_count[4]++;
                break;
            case ('F'):
                chemistrylaboratory();
                location_count[5]++;
                break;
            case ('G'):
                lawn();
                location_count[6]++;
                break;
            case ('H'):
                communitymarket();
                location_count[7]++;
                break;
            }
        }
        if (day == 6)
        {
            cout << "you win!" << endl;
        }
    }
    return;
}
