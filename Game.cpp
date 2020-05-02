#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Story_telling();

void storying_telling()
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

int main()
{
    storying_telling();
}