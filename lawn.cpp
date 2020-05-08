#include <iostream>
#include <vector>
#include <main.h>
#include <gameengine.h>
using namespace std;

void lawn(){
  //vector<string> resource_list = {"Food", "Water", "Mask", "Utility knife", "Realistic toy gun", "Clothes", "Radio", "Notebook & Pen", "Bible"};
  //vector<int> resource_amount = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  //vector<int> resource_upperbound = {10, 10, 10, 2, 1, 5, 1, 1, 1};
  //max;
  int count = location_count[6], lawn_sentiment_count = 0;
  char choice;
  if (count == 1){
    cout << "This is your 1st visit to lawn" << endl;
    cout << "In the centre of the lawn, there is an old person." << endl;
    cout << "\"I am running out of mask, I give out two food for two masks, deal?\"." << endl;
    cout << "A: Yes" << endl;
    cout << "B: No" << endl;
    cout << "What is your choice (A or B)?" << endl;
    cin >> choice;
    while (choice != 'A' && choice != 'B'){
      cout << "Error! Please input a valid choice (A / B):";
      cin >> choice;
    }
    if (choice == 'A'){
      cout << "food + 2" << endl;
      cout << "mask -2" << endl;
      resource_amount[0] += 2;
      resource_amount[2] -= 2;
    }
    else{ // B
      cout << "No change in resources." << endl;
    }
    //count++;
  }
  else if (count == 2){
    cout << "This is your 2nd visit to lawn" << endl;
    cout << "You remember the old man last time. So you are going to find him out and request for resources exchange." << endl;
    cout << "However, you walk around and cannot find him." << endl;
    cout << "Meanwhile, you see there is a man lying on the floor. You run and check it out, he is the old man," << endl;
    cout << "\"...help...help...me.........\"" << endl << endl;
    cout << "You are going to:" << endl;
    cout << "A: Save him by giving him one food and one water." << endl;
    cout << "B: Take away all his belongings." << endl;
    cin >> choice;
    while (choice != 'A' && choice != 'B'){
      cout << "Error! Please input a valid choice (A / B):";
      cin >> choice;
    }
    if (choice == 'A'){
      cout << "his is a very hard decision." << endl;
      cout << "\"Although i am now getting trouble, I still wish to help him\", you tell yourself. " << endl;
      cout << "food - 1" << endl;
      cout << "water - 1" << endl;
      resource_amount[0]--;
      resource_amount[1]--;
      sentiment_count++;
      lawn_sentiment_count++;
    }
    else{
      cout << "You take away his bag. You check for the bag and find two clean masks inside." << endl;
      cout << "mask + 2" << endl;
      resource_amount[2] += 2;
      brutal_count++;
    }
    //count++;
  }
  else{ //the 3rd visit
    cout << "This is the third visit. You meet the old man again" << endl;
    if (lawn_sentiment_count != 0){
      //the user helped the man before
      cout << "Jesus, you saved me last time. I am going to give you these three things as reward." << endl;
      cout << "food + 1" << endl;
      cout << "water + 1" << endl;
      cout << "mask + 1" << endl;
      for (int i = 0; i < 3; i++){
        resource_amount[i]++;
      }
    }
    else{
      cout << "\"You stole all my things when i was feeling unwell last time!\"" << endl;
      cout << "The man takes out his gun and points to you" << endl;
      if (resource_amount[8] == 1){
        cout << "You have no idea about what to do. You find your bag and randomly take something out." << endl;
        cout << "\"This is bible\"" << endl;
        cout << "The man is shocked and says: " << endl;
        cout << "I forgive you this time. However, give me the bible." << endl;
        cout << "bible - 1" << endl;
        cout << "You have never expected the bible can save your life." << endl;
        resource_amount[8]--;
      }
      else{
        cout << "You apologise and give back two clean masks as compensation." << endl;
        cout << "\"No way, go to the hell!\"" << endl;
        cout << "Bang!" << endl;
        cout << "You are dizzy and fainted" << endl;
        cout << "Game Over" << endl;
        for (int i = 0; i < resource_vector_size; i++){
          resource_amount[i] = 0;
        }
      }
    }
    //count++;
  }
}
