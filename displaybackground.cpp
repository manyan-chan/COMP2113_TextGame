#include <iostream>
#include <fstream>
#include <string>
#include "displaybackground.h"
using namespace std;


void display_background()
{
    ifstream fin;
    fin.open("Plot/Background.txt");
    if (fin.fail())
    {
        cout << "Error in file opening!" << endl;
        exit(1);
    }
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return;
}