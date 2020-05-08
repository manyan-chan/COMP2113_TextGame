#ifndef main_
#define main_

#include <vector>
#include <string>

extern int sentiment_count;
extern int day_count;
extern std::vector <std::string> resource_list;
extern std::vector<int> resource_amount;
extern std::vector<int> resource_upperbound;
extern int resource_vector_size;
extern int maximum;
extern int lawn_sentiment_count;
extern bool save_boy;
extern char cases;
extern int location_count[9]; //between 1-3, indicated the coming event is the n-th visit time
//{"supermarket", "hospital", "coffeeshop", "convenientstore", "schoolhall", "chemistrylaboratory", "lawn", "communitymarket"};
extern bool casino;
extern int frequency;

#endif