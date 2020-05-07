#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct location_array{
  string location;
  int visit_time; //between 1-3
  bool mc;
};

void open_location_info(int resource_list[], int resource_amount[], int arraySize){

  //creating the array

  ifstream fin;
  fin.open("plot/"+ location + ".txt");
  if (fin.fail()){
    exit(1);
  }
  string line;
  while (getline(fin, line)){
    cout << line;
  }
  fin.close();

  //user is going to input his choice
  char choice;
  cout << "Your choice is: ";
  cin >> choice;

}


//------------------------------------------------------------------------------------------------------------//

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
  string location;

  //--------------------- load location database, can put in separate file ------------------------
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

  switch (cases)
  {
    case ('A'):
        location = "supermarket";
        open_location_info(resource_list, resource_amount, arraySize, location);
        break;
    case ('B'):
        location = "laboratory";
        laboratory();
        break;
    case ('C'):
        location = "coffeeshop";
        coffeeshop();
        break;
    case ('D'):
        location = "convenientstore";
        convenientstore();
        break;
    case ('E'):
        location = "schoolhall";
        schoolhall();
        break;
    case ('F'):
        location = "chemistrylaboratory";
        chemistrylaboratory();
        break;
    case ('G'):
        location = "lawn";
        lawn();
        break;
    case ('H'):
        location = "communitymarket";
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
