#ifndef allocate
#define allocate

#include <iostream>
#include <iomanip>
#include "main.h"
#include "allocate_resource.h"
using namespace std;

//void allocate_resource (vector<string>& resource_list, vector<int>& resource_amount, vector<int>& resource_upperbound, int resource_vector_size, int &max){
void allocate_resource()
{
  int * temp_array = new int [9] {10, 10, 10, 1, 1, 1, 1, 1, 1};
  cout << "Please input the things you want bring, you can bring at max 18 units." << endl;
  cout << "---------------------------" << endl;
  //reason of dynamic: this array can be deleted when the function ends
  int upper_limit, input;
  bool trigger_1 = false, trigger_2 = false;
  while (maximum > 0)
  {
    for (int i = 0; i < resource_vector_size; i++)
    {
      if (maximum > 0)
      {
        upper_limit = temp_array[i];
        if (upper_limit == 0)
        {
          cout << "You have got all " << resource_list[i] << "already." << endl;
          cout << "Current amount of " << resource_list[i] << ": " << resource_amount[i] << endl;
        }
        else
        {
          cout << "You have " << maximum << " credits left." << endl;
          cout << "Current amount of " << resource_list[i] << ": " << resource_amount[i] << endl;
          cout << "How many do you want? (0 - " << upper_limit << "): ";
          cin >> input;
        }
        while (input < 0 || input > upper_limit || (maximum - input) < 0)
        {
          //input < 0 || input > upper_limit  means out of range
          //(max - input) < 0 means he have chosen more than 15 units
          if ((maximum - input) < 0)
          {
            cout << "You do not have enough credit." << endl;
            trigger_1 = true;
          }
          if (input < 0 || input > upper_limit)
          {
            if (trigger_1)
            {
              cout << "Besides, please enter an interger between 0 - " << upper_limit << "." << endl;
            }
            else
            {
              cout << "Error! Please enter an integer between 0 - " << upper_limit << "." << endl;
            }
            trigger_2 = true;
          }

          if (trigger_1 || trigger_2)
          {
            cout << resource_list[i] << "(0 - " << upper_limit << "): ";
            cin >> input;
          }
        }
        resource_amount[i] += input;
        maximum -= input;
        temp_array[i] -= input;
        if (upper_limit != 0)
        {
          cout << "Success" << endl;
        }
        cout << "---------------------------" << endl;
        //cout << setfill('-');
        //cout << setw(20) << endl;
        //cout << "---------------------------" << endl;
        trigger_1 = false; //reset the boolean key
        trigger_2 = false;
      }
    }
    if (maximum > 0)
    {
      cout << "You still have credit, please add the *extra* units on the equipment you want:" << endl;
    }
  }

  cout << "Here are your belongings: " << endl;
  for (int i = 0; i < resource_vector_size; i++)
  {
    cout << resource_list[i] << ": " << resource_amount[i] << endl;
  }
  //cout << setfill('-');
  //cout << setw(20) << endl;
  cout << "---------------------------" << endl;
  cout << "Game start." << endl;

  delete [] temp_array;
}


#endif
