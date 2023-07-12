#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char text[50];

    ifstream ifile;
    ifile.open("sample.txt");

    ifile.getline(text, 50);
    cout << text;

    ifile.close();
    return 0;
}