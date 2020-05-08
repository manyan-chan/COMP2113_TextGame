#include <iostream>
#include <print_resource.h>
#include <gameengine.h>
#include <main.h>

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
