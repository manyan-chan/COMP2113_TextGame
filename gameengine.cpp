#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct location_array{
  string location;
  int visit_time; //between 1-3
  bool mc;
};

void open_location_info(int resource_list[], int resource_amount[], int arraySize, string location, location_array location_database[], int location_array_size, int load_pos){

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

  //check this is mc or not
  bool check;
  for (int i = 0; i < location_array_size; i++){
    if (location_database[i].location == location && location_database[i].visit_time == load_pos){ //find the corresponding element in the array
      check = location_database[i].mc; //true or false only
    }
  }

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
  switch (cases)
  {
    case ('A'):
        location = "supermarket";
        load_pos = location_count[0]；
        break;
    case ('B'):
        location = "hospital";
        load_pos = location_count[1]；
        break;
    case ('C'):
        location = "coffeeshop";
        load_pos = location_count[2]；
        break;
    case ('D'):
        location = "convenientstore";
        load_pos = location_count[3]；
        break;
    case ('E'):
        location = "schoolhall";
        load_pos = location_count[4]；
        break;
    case ('F'):
        location = "chemistrylaboratory";
        load_pos = location_count[5]；
        break;
    case ('G'):
        location = "lawn";
        load_pos = location_count[6]；
        break;
    case ('H'):
        location = "communitymarket";
        load_pos = location_count[7]；
        break;
  }
  open_location_info(resource_list, resource_amount, resource_arraySize, location, location_database, location_array_size, load_pos); //print location info
  day_count++;

  if (daycount == 7)
  {
      cout << "you win!" << endl;
  }

  return;
}
