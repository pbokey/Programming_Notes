#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "Bad Number 1: " << badNums[0] << endl;

    //Multi-D Array
    char myName[5][5] = {{'D','e','r','e','k'}, {'b','a','n','a','s'}};
    cout << "Third letter in my first name: " << myName[0][2] << endl;

    //you can change values in arrays just like in java

    for (int i = 0; i < (sizeof(badNums)/sizeof(*badNums)); i++) {
        //cout << badNums[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //cout << myName[i][j];
        }
    }
    cout << endl;

    //random numbers
    int randNum = (rand() % 100) + 1; //this is done at compile time, does not changee everytime you run the program
    cout << "Random Number: " << randNum << endl;

    //user input
    string numberGuessed;
    int intNumberGuessed = 0;

    do {
        cout << "Enter a number between 1 and 10" << endl;
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;
    } while (intNumberGuessed != 4);
}