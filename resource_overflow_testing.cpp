#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
//vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
//vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
//int location_count [9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; //between 1-3, indicated the coming event is the n-th visit time
//int resource_vector_size = resource_list.size();
//int max = 18;

void bag_total_input_function(int &bag_total_resource, int resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount, vector<int> &resource_upperbound, int &input_item, int &input_amount, int &max, char &confirm_button, int &function_count){
  if (function_count == 0){
    cout << "There are more than 18 units of resources in your bag." << endl;
  }
  else{
    cout << "You are still having more than 18 units of resources in your bag." << endl;
    cout << "Please keep removing resources." << endl;
  }
  cout << "Total amount of resources: " << bag_total_resource << endl;
  cout << setfill('=');
  cout << right << setw(56) << " " <<endl;
  cout << left << setfill(' ') << setw(10) << " " << endl;;
  cout << "Please remove " << (bag_total_resource - 18) << " units of resources" << endl;
  //cout << left << setfill(' ');
  cout << setw(10) << " " << endl;
  cout << setw(13) << "Option Number" << " | " << setw(20) << "Item" << " | " << setw(8) << "Current" << " | " << setw(5) << "Max" << endl;
  cout << setfill('-');
  cout << right << setw(56) << " " <<endl;
  cout << left << setfill(' ');
  for (int i = 0; i < resource_vector_size; i++){
    cout << "Option " << setw(6) << (i+1) << " | " << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << " | " << setw(5) << resource_upperbound[i] << endl;
  }
  //cout << "--------------------------------------------" << endl;
  //for (int i = 0; i < resource_vector_size; i++){
    //cout << "Option " << (i+1) << " : " << resource_list[i] << endl;
  //}
  //cout << "--------------------------------------------" << endl;
  cout << setfill('=');
  cout << right << setw(56) << " " << endl;
  cout << setfill(' ');
  cout << "Which item do you want to remove?" << endl;
  cout << "Please input option number (i.e. 1, 2, ... , 9): ";
  //cin >> input_item;
  while (!(cin >> input_item)){
    cout << "Error! Please enter a valid input (i.e. 1, 2, ... 9): ";
    cin.clear();
    cin.ignore(123, '\n');
  }
  while (input_item < 1 || input_item > 9){
    cout << "Error! Please enter a valid input (i.e. 1, 2, ... 9): ";
    //1st amendment
    cin >> input_item;
    cout << endl;
  }
  cout << "-------> You are going to remove " << resource_list[input_item - 1] << endl;
  cout << "Amount going to be removed: ";
  //cin >> input_amount;
  while (!(cin >> input_amount)){ //have to deal with inputing double as well
    cout << "Error! Please enter an integer: ";
    cin.clear();
    cin.ignore(123, '\n');
  }
}

void bag_total_function(int &bag_total_resource, int resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount, vector<int> &resource_upperbound, int &input_item, int &input_amount, int &max, char &confirm_button, int &function_count){
  while (max < 0){
    //item(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
    bag_total_input_function(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
    while ((resource_amount[input_item-1] - input_amount) < 0){
      cout << right << setfill('-');
      cout << setw(45) << " " << endl;
      //cout << "--------------------------------------------" << endl;
      cout << "Error! You do not enough units to remove " << resource_list[input_item-1] << endl;
      cout << "Please start again from the beginning and enter a smaller number." << endl;
      bag_total_input_function(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
      //loop_check = true;
    }
    //cout << "resource_amount[item-1]: " << resource_amount[input_item-1] << endl;
    //cout << "input_amount: " << input_amount << endl;
    //cout << "resource_upperbound[item-1]: " << resource_upperbound[input_item-1] << endl;
    //while((resource_amount[input_item-1] - input_amount) > resource_upperbound[input_item-1]){
      //cout << "Error! After removing, you still have " << (bag_total_resource - 18 - input_amount) << " extra units." << endl;
      //cout << "Please start again from the beginning and enter a greater number." << endl;
      //item(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
    //}
    cout << "After removing, you have: " << endl;
    cout << right;
    cout << setfill('=') << setw(39) << " " << endl;
    cout << setfill(' ');
    cout << left;
    cout << setw(20) << "Item" << " | " << setw(8) << "Current" << " | " << setw(5) << "Max" << endl;
    for (int i = 0; i < resource_vector_size; i++){
      //cout << setw(20) << "Item" << " | " << setw(8) << "Current" << " | " << setw(5) << "Max" << endl;
      //cout << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << " | " << setw(5) << resource_upperbound[i] << endl;
      if (i != input_item-1){
        //setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i]
        cout << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << " | " << setw(5) << resource_upperbound[i] << endl;
      }
      else{
        //cout << resource_list[i] << ": " << (resource_amount[i] - input_amount) << endl;
        cout << setw(20) << resource_list[i] << " | " << setw(8) << (resource_amount[i] - input_amount) << " | " << setw(5) << resource_upperbound[i] << endl;
      }
    }
    cout << right;
    cout << setfill('=') << setw(39) << " " << endl;
    cout << "After deleting, you cannot recover." << endl;
    cout << "Confirm? (Y / N): ";
    cin >> confirm_button;
    while (confirm_button != 'Y' && confirm_button != 'N'){
      //cout << "Hello world" << endl;
      cout << "Error! Please enter a valid input (i.e. Y / N): ";
      cin >> confirm_button;
    }
    if (confirm_button == 'Y'){
      cout << right;
      cout << setfill(' ');
      cout << setw(70) << " " << endl;
      cout << setw(70) << " " << endl;
      cout << setfill('-');
      cout << setw(35) << "Success" << setw(35) << " " << endl;
      cout << setfill(' ');
      cout << setw(70) << " " << endl;
      cout << setw(70) << " " << endl;
      //cout << "-----------Success----------" << endl; //should
      resource_amount[input_item-1] -= input_amount;
      max += input_amount;
      bag_total_resource -= input_amount;
    }
    else{
      cout << "Request cancelled. Please start again from the beginning." << endl;
      cout << right;
      cout << setfill(' ');
      cout << setw(70) << " " << endl;
      cout << setw(70) << " " << endl;
      cout << setfill('-');
      cout << setw(47) << "Request Cancelled" << setw(30) << " " << endl;
      cout << setfill(' ');
      cout << setw(70) << " " << endl;
      cout << setw(70) << " " << endl;
      //cout << "-----------Request Cancelled----------" << endl;
      //bag_total_function(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
    }
    function_count++;
    cout << setfill(' ');
  }
}

//void bag_total_function(int &bag_total_resource, int resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount, vector<int> &resource_upperbound, int &input_item, int &input_amount, int &max, char &confirm_button, int &function_count, bool &loop_check){
void single_item_function(int &bag_total_resource, int resource_vector_size, vector<string> &resource_list, vector<int> &resource_amount, vector<int> &resource_upperbound, int &input_amount, int &max, char &confirm_button){
  for (int i = 0; i < resource_vector_size; i++){
    while (resource_amount[i] > resource_upperbound[i]){
      cout << resource_list[i] << " exceeds the limit." << endl;
      //cout << "Your current amount: " << resource_amount[i] << endl;
      //cout << "Limit: " << resource_upperbound[i] << endl;
      cout << right;
      cout << setfill('=') << setw(39) << " " << endl;
      cout << left;
      cout << setfill(' ');
      cout << setw(20) << "Item" << " | " << setw(8) << "Current" << " | " << setw(5) << "Max" << endl;
      cout << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << " | " << setw(5) << resource_upperbound[i] << endl;
      cout << right;
      cout << setfill('=') << setw(39) << " " << endl;
      cout << "How many units are you going to give up? (1 - " << resource_amount[i] <<"): ";
      cin >> input_amount;
      while (input_amount < 1 || input_amount > resource_amount[i] || (resource_amount[i] - input_amount) > resource_upperbound[i]){
        //have to set one more condition for not inputing a integer
        if (input_amount < 1 || input_amount > resource_amount[i]){
          cout << "Error! Please enter a valid input (i.e. 1 - " << resource_amount[i] << "): ";
          cin >> input_amount;
        }
        else{
          cout << "Error! After removing, you still have " << (resource_amount[i] - input_amount - resource_upperbound[i]) << " extra units." << endl;
          cout << "Please enter a greater number." << endl;
          cout << "Please enter the amount of " << resource_list[i] << " that you are going to delete (1 - " << resource_amount[i] << "): ";
          cin >> input_amount;
        }
        //cin >> input_amount;
      }
      cout << "After removing, you have: " << endl;
      for (int k = 0; k < resource_vector_size; k++){
        if (k == i){
          //cout << resource_list[i] << ": " << (resource_amount[k] - input_amount) << endl;
          cout << right;
          cout << setfill('=') << setw(39) << " " << endl;
          cout << left;
          cout << setfill(' ');
          cout << setw(20) << "Item" << " | " << setw(8) << "Current" << " | " << setw(5) << "Max" << endl;
          cout << setw(20) << resource_list[i] << " | " << setw(8) << (resource_amount[k] - input_amount) << " | " << setw(5) << resource_upperbound[i] << endl;
          cout << right;
          cout << setfill('=') << setw(39) << " " << endl;
        }
      }
      cout << "Confirm? (Y / N): ";
      cin >> confirm_button;
      while (confirm_button != 'Y' && confirm_button != 'N'){
        cout << "Error! Please enter a valid input (i.e. Y / N): ";
        cin >> confirm_button;
      }
      if (confirm_button == 'Y'){
        cout << "-----------Success----------" << endl; //should
        resource_amount[i] -= input_amount;
        max += input_amount;
        bag_total_resource -= input_amount;
      }
      else{
        cout << "Request cancelled. Please start again from the beginning." << endl;
        //item(bag_total_resource, resource_vector_size, resource_list, resource_amount, input_item, input_amount, max);
      }
    }
  }
}

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


int main(){

  //---------------------------------------------from global variable---------------------------------------------//
  int sentiment_count = 0;
  int day_count = 0;
  vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
  vector<int> resource_amount = {10, 10, 10, 0, 0, 2, 4, 1, 1};
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


  //there are two types of overflow
  //1. exceed the limit of a particular resoruce (e.g. mask = 10)
  //2. there are more than 18 units of resources in the user's display_background
  int bag_total_resource = 0;
  int input_item;
  int input_amount;
  char confirm_button;
  for (int i = 0; i < resource_vector_size; i++){
    bag_total_resource += resource_amount[i];
  }
  single_item_function(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_amount, max, confirm_button);
  bag_total_function(bag_total_resource, resource_vector_size, resource_list, resource_amount, resource_upperbound, input_item, input_amount, max, confirm_button, function_count);
  print_resource(resource_vector_size, resource_list, resource_amount);
  //--------separate line------------//
}
