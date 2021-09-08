//made by xela with love <3
//seed is made up by 20 random characters
#include <iostream>
#include <ctime>
#include <windows.h>
#include "header.h"
using namespace std;

int main()
{
    //we define some variables

    int randomCharacters = 0,confirmation = 0;

    cout << "Welcome to the seed / random number generator!" << endl;

    Sleep(3000);

    cout << "made by Xela with love <3" << endl;

    Sleep(3000);

    //we check if the user is sure of how long the number should be

    confirmLength(randomCharacters,confirmation);

}