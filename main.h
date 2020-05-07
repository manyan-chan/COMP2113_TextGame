#ifndef main
#define main

#include <vector>
#include <string>

extern int sentiment_count = 0;
extern int day_count = 0;
extern std::vector <std::string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "First Aids", "Radio", "Notebook & Pen", "Bible"};
extern std::vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
extern std::vector<int> resource_upperbound = {10, 10, 10, 1, 1, 3, 1, 1, 1};
extern int resource_vector_size = resource_list.size();
extern int max = 18;
extern int lawn_sentiment_count = 0;
extern bool save_boy;



#endif