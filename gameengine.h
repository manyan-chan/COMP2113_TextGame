#ifndef gameengine
#define gameengine

void game_engine();
extern int day_count;
extern char cases;
extern int location_count[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; //between 1-3, indicated the coming event is the n-th visit time
//{"supermarket", "hospital", "coffeeshop", "convenientstore", "schoolhall", "chemistrylaboratory", "lawn", "communitymarket"};
extern bool casino = false;

#endif