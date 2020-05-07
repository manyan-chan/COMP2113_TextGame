#include <iostream>
#include <vector>
using namespace std;

void lawn(vector<string> resource_list, vector<int> &resource_amount, vector<int> &resource_bound , int &resource_vector_size, int &max){
  //vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
  //vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  //vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
  //max;
  int count = 1, lawn_sentiment_count = 1;
  char choice;
  if (count == 1){
    cout << "This is your 1st visit to lawn" << endl;
    cout << "In the centre of the lawn, there is an old person. \"I am running out of mask, I give out two food for two masks, deal?\"." << endl;
    cout << "A: Yes" << endl;
    cout << "B: No" << endl;
    cout << "What is your choice (A or B)?" << endl;
    cin >> choice;
    while (true){
      if (choice == 'A'){
        if ((resource_amount[0]++) <= resource_upperbound[0]){
          cout << "food + 1, mask -1" << endl;
          resource_amount[0]++;
          resource_amount[2]--;
        }
        else{
          cout << "You cannot hold more than 10 food" << endl;
          cout << "No change in resources." << endl;
        }
        break;
      }
      else if (choice == 'B'){
        cout << "No change in resources." << endl;
        break;
      }
      else{
        cout << "Error! Please enter a valud input ('A' or 'B'): ";
        cin >> choice;
      }
    }
  }
  else if (choice == 2){
    cout << "This is your 2nd visit to lawn" << endl;
    cout << "You remember the old man last time. So you are going to find him out and request for resources exchange."";
    cout << "However, you walk around and cannot find him." << endl << endl;
    cout << "Meanwhile, you see there is a man lying on the floor. You run and check it out, he is the old man," << endl;
    cout << "\"...help...help...me.........\"" << endl << endl;
    cout << "You are going to:" << endl;
    cout << "A: Save him by giving him one food and one water." << endl;
    cout << "B: Take away all his belongings." << endl;
    cin >> choice;
    while (true){
      if (choice == 'A'){
        cout << "This is a very hard decision." << endl;
        cout << "\"Although i am now getting trouble, I still wish to help him\", you tell yourself." << endl;
        resource_amount[0]--;
        resource_amount[1]--;
        sentiment_count++;
        lawn_sentiment_count++;
        break;
      }
      else if (choice == 'B'){
        cout << "No change in resources." << endl;
        break;
      }
      else{
        cout << "Error! Please enter a valud input ('A' or 'B'): ";
        cin >> choice;
      }
    }

  }


}
