#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void display()
{
    ifstream fin;
    fin.open("Plot/Story.txt");
    if (fin.fail())
    {
        cout << "Error in file opening!" << endl;
        exit(1);
    }
    string line;
    char story;
    switch (story)
    while (getline(fin, line))
    {
    }
    fin.close();
    return;
}