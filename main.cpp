#include "displaybackground.h"
#include "gameengine.h"

using namespace std;
int day_count = 0;

int main()
{
    //-------------------------------------------------------------//

    display_background();

    //-------------------------------------------------------------//

    vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
    vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
    int resource_vector_size = resource_list.size();
    allocate_resource (resource_list, resource_amount, resource_upperbound, resource_vector_size);

    //-------------------------------------------------------------//

    game_engine();

    //-------------------------------------------------------------//

    return 0;
}
