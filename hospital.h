#ifndef hos
#define hos

#include <iostream>
#include <vector>
#include "main.h"
#include "gameengine.h"
using namespace std;

void hospital()
{
  //vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
  //vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  //vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
  //max;
  int count = location_count[1];
  string choice;
  if (count == 1)
  {
    cout << "This is your 1st visit to hopsital" << endl;
    cout << "In the lobby, you walk around." << endl;
    cout << "However, there's nothing here." << endl;
    cout << "So you left." << endl;
  }
  else if (count == 2)
  {
    cout << "This is your 2nd visit to hospital" << endl;
    cout << "You don't know why you have to visit the hospital twice." << endl;
    cout << "You just feel something is directly you to hospial" << endl;
    if (resource_amount[6] == 1)
    {
      cout << "Suddenly, your radio is switched on and started playing: " << endl;
      cout << "\"Please save me at 1/F.\"" << endl;
      cout << "You go up and see a man sitting on the floor and looking sad." << endl;
      cout << "You comfort him and he feels better now" << endl;
      cout << "\"Thank you so much, I would like to gift you a mask. We are friend now.\"" << endl;
      cout << "water + 1" << endl;
      resource_amount[1]++;
    }
    else
    {
      cout << "Which floor are you going to: " << endl;
      cout << "A: 1/F" << endl;
      cout << "B: 2/F" << endl;
      cin >> choice;
      while (choice != "A" && choice != "B")
      {
        cout << "Error! Please enter again (A / B): " << endl;
      }
      if (choice == "A")
      {
        cout << "You go up and see a man sitting on the floor and looking sad." << endl;
        cout << "You comfort him and he feels better now" << endl;
        cout << "\"Thank you so much, I would like to gift you a mask. We are friend now.\"" << endl;
        cout << "water + 1" << endl;
        resource_amount[1]++;
      }
      else
      {
        cout << "You find nothing in 2/F." << endl;
      }
      resource_amount[1]++;
    }
  }
  else if (count == 3)
  { //the 3rd visit
    cout << "This is the third visit." << endl;
    cout << "This time you do not plan to go up." << endl;
    cout << "It is becasue you find a mask at the corner." << endl;
    cout << "mask + 1" << endl;
    resource_amount[2]++;
  }
  else
  {
    cout << "You find nothing interesting, you decide not to come here again. Please choose any other place to go!" << endl;
    frequency--;
    return;
  }
}

#endif
