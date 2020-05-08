#include <iostream>
#include <vector>
#include <iomanip>
#include <print_resource.h>
#include <gameengine.h>
#include "main.h"
using namespace std;

void printresource()
{
  cout << "Here are your resources: " << endl;
  cout << right;
  cout << setfill('=') << setw(28) << " " << endl;
  cout << left << setfill(' ');
  for (int i = 0; i < resource_vector_size; i++)
  {
    cout << setw(20) << resource_list[i] << " | " << setw(8) << resource_amount[i] << endl;
    //cout << resource_list[i] << ": " << resource_amount[i] << endl;
  }
  cout << right;
  cout << setfill('=') << setw(28) << " " << endl;
}
