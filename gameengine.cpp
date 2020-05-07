#include <iostream>
#include <fstream>
#include <string>

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
  string location;

  //--------------------- load location database, can put in separate file ------------------------
  const int location_array_size;
  location_array location_database[27];
  ifstream loc_master;
  loc_master.open("plot/location_master.txt");
  if (loc_master.fail()){
    exit(1);
  }
  for (int i = 0; i < 27; i++){ //a .txt file is required
    fin >> location_database[i].location;
    fin >> location_database[i].visit_time;
    fin >> location_database[i].mc;
  }
  //--------------------- load location database, can put in separate file ------------------------
  int location_count [9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; //between 1-3, indicated the coming event is the n-th visit time
  //{"supermarket", "hospital", "coffeeshop", "convenientstore", "schoolhall", "chemistrylaboratory", "lawn", "communitymarket"};

  int frequency; //incidate the n-th visit time
  switch (cases)
  {
    case ('A'):
        frequency = location_count[0]；
        supermarket();
        location_count[0]++;
        break;
    case ('B'):
        frequency = location_count[1]；
        hospital();
        location_count[1]++;
        break;
    case ('C'):
        frequency = location_count[2]；
        coffeeshop();
        location_count[2]++;
        break;
    case ('D'):
        frequency = location_count[3]；
        convenientstore();
        location_count[3]++;
        break;
    case ('E'):
        frequency = location_count[4]；
        schoolhall();
        location_count[4]++;
        break;
    case ('F'):
        frequency = location_count[5]；
        chemistrylaboratory();
        location_count[5]++;
        break;
    case ('G'):
        frequency = location_count[6]；
        lawn();
        location_count[6]++;
        break;
    case ('H'):
        frequency = location_count[7]；
        communitymarket();
        location_count[7]++;
        break;
  }
  day_count++;

  if (daycount == 7)
  {
      cout << "you win!" << endl;
  }

  return;
}
