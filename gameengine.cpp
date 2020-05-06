#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//cases
// A is supermarket
// B is laboratory
// C is coffee shop
// D is convenient store
// E is school hall
// F is chemistry laboratory
// G is lawn
// H is community market

void game_engine()
{
    switch (cases)
    {
    case ('A'):
        supermarket();
        break;
    case ('B'):
        laboratory();
        break;
    case ('C'):
        coffeeshop();
        break;
    case ('D'):
        convenientstore();
        break;
    case ('E'):
        schoolhall();
        break;
    case ('F'):
        chemistrylaboratory();
        break;
    case ('G'):
        lawn();
        break;
    case ('H'):
        communitymarket();
        break;
    }
    day_count++;

    if (daycount == 7)
    {
        cout << "you win!" << endl;
    }

    return;
}