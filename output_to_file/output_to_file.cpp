#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char text[50] = "Hello World!";

    ofstream ofile;
    ofile.open("sample.txt");

    ofile << text;

    ofile.close();
    return 0;
}