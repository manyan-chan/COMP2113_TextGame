#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "allocate_resource.h"
#include "coffeeshop.h"
#include "supermarket.h"
#include "schoolhall.h"
#include "convenientstore.h"
#include "chemistrylaboratory.h"
#include "communitymarket.h"
#include "hospital.h"
#include "lawn.h"
#include "main.h"
#include "gameengine.h"
#include "communitymarket.h"
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

    allocate_resource();

    for (int day = 0; day < 7; day++)
    {
        for (; frequency < 3; frequency++)
        {
            char cases;
            cout << "There are 8 places you can visit, choose your location wisely.\n"
                 << "A. Supermarket\n"
                 << "B. Hospital\n"
                 << "C. Coffee shop\n"
                 << "D. Convenient store\n"
                 << "E. School hall\n"
                 << "F. Chemistry laboratory\n"
                 << "G. Lawn\n"
                 << "H. Community market\n"
                 << "Input: " << endl;

            cin >> cases;
            
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
            default:
                cout << "Please try again! A-H?";
                frequency--;
            }
        }
        frequency = 0;
        if (day == 6)
        {
            cout << "you win!" << endl;
        }
    }
    return;
}
