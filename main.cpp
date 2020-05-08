#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "main.h"
#include "gameengine.h"
#include "displaybackground.h"

using namespace std;

int sentiment_count = 0;
int day_count = 0;
std::vector <std::string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "First Aids", "Radio", "Notebook & Pen", "Bible"};
std::vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<int> resource_upperbound = {10, 10, 10, 1, 1, 3, 1, 1, 1};
int resource_vector_size = resource_list.size();
int maximum = 18;
int lawn_sentiment_count = 0;
bool save_boy = false;
char cases;
int location_count[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; //between 1-3, indicated the coming event is the n-th visit time
//{"supermarket", "hospital", "coffeeshop", "convenientstore", "schoolhall", "chemistrylaboratory", "lawn", "communitymarket"};
bool casino = false;


int main()
{
    //-------------------------------------------------------------//

    display_background();

    //-------------------------------------------------------------//


    //-------------------------------------------------------------//

    game_engine();

    //-------------------------------------------------------------//

    return 0;
}
