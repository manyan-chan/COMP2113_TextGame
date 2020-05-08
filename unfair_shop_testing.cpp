#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void print_resource(int &resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount){
  cout << "Here are your resources: " << endl;
  cout << right;
  cout << setfill('=') << setw(28) << " " << endl;
  cout << left << setfill(' ');
  for (int i = 0; i < resource_vector_size; i++){
    cout << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << endl;
    //cout << resource_list[i] << ": " << resource_amount[i] << endl;
  }
  cout << right;
  cout << setfill('=') << setw(28) << " " << endl;
}

void unfair_shop(int &resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount){
  char choice;
  int h, k;
  for(int i = 0; i < 3; i++){
    h = (i+1)%3;
    k = (i+2)%3;
    while (resource_amount[i] >= 3){
      cout << "You have " << resource_amount[i] << " units of " << resource_list[i] <<" now" << endl;
      cout << "Do you want to spend 3 units of food for 1 unit of " << resource_list[h] << " or " << resource_list[k]<< "?" << endl;
      cout << "A: 3 units of " << resource_list[i] << " for 1 unit of " << resource_list[h] << endl;
      cout << "B: 3 units of " << resource_list[i] << " for 1 unit of " << resource_list[k] << endl;
      cout << "C: Probably later" << endl;
      cout << "------------" << endl;
      cout << "Your choice is: ";
      cin >> choice;
      while (choice != 'A' && choice != 'B' && choice != 'C'){
        cout << "Error! Please input again (A - C): ";
        cin >> choice;
      }
      if (choice == 'A'){
        cout << "Success" << endl;
        resource_amount[i] -= 3;
        resource_amount[h]++;
      }
      else if(choice == 'B'){
        cout << "Success" << endl;
        resource_amount[i] -= 3;
        resource_amount[k]++;
      }
      else{
        cout << "See you later!" << endl;
        cout << right;
        cout << setfill('-') << setw(20) << " " << endl;
        cout << setfill(' ');
        print_resource(resource_vector_size, resource_list, resource_amount);
        break;
      }
      cout << right;
      cout << setfill('-') << setw(20) << " " << endl;
      cout << setfill(' ');
      print_resource(resource_vector_size, resource_list, resource_amount);
    }
  }
  cout << "The shop is closed as you do not have 3 units of either one (food or water or mask)." << endl;
  print_resource(resource_vector_size, resource_list, resource_amount);
}




int main(){

  //---------------------------------------------from global variable---------------------------------------------//
  int sentiment_count = 0;
  int day_count = 0;
  vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
  vector<int> resource_amount = {10, 0, 0, 0, 0, 2, 4, 1, 1};
  vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
  int location_count [9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; //between 1-3, indicated the coming event is the n-th visit time
  int resource_vector_size = resource_list.size();
  int max = 18;
  int lawn_sentiment_count = 0;
  int function_count = 0;

  for (int i = 0; i < resource_vector_size; i++){
    max -= resource_amount[i];
  }

  //--------------------------------------------global variable end---------------------------------------------//



  print_resource(resource_vector_size, resource_list, resource_amount);

  unfair_shop(resource_vector_size, resource_list, resource_amount);

  //--------separate line------------//
}
