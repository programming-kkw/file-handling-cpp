#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char text1[50] = "Hello World!";
    char text2[50];

    fstream file;
    file.open("sample.txt");

    file << text1;
    file.close();
    // Closing the file to save contents.
    // Without closing the file if we try to read it won't read because the file is empty.
    // Or something else idk.

    file.open("sample.txt");

    file.getline(text2, 50);
    cout << text2;

    file.close();
    return 0;
}