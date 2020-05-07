#include "displaybackground.h"
#include "gameengine.h"
using namespace std;

//------------------------set global variables------------------------//

int sentiment_count = 0;
int day_count = 0;
vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
int resource_vector_size = resource_list.size();
int max = 18;
int lawn_sentiment_count = 0;

//------------------finished setting global variables------------------//

int main()
{
    //-------------------------------------------------------------//

    display_background();

    //-------------------------------------------------------------//


    allocate_resource();

    //-------------------------------------------------------------//

    game_engine();

    //-------------------------------------------------------------//

    return 0;
}
