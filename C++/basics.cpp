#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    //variables and data types, must start with a letter
    const double PI = 3.1415926535;
    char myGrade = 'A'; //takes up one bite in memory
    bool isHappy = true; //or false
    int myAge = 39;
    float favNum = 3.123142; //accurate up to 6 decimal places

    cout << "Favorite Number: " << favNum << "\n";

    //find number of bytes for data typw
    cout << "Size of int: " << sizeof(myAge) << endl;

    int largestInt = 2147483647;
    cout << "Largest Int: " << largestInt << endl;

    //incrementing and decrementing
    int five = 5;
    cout << "5++ = " << five++ << endl; //outputs the value of 5, then incremenents it to 6
    cout << "++5 = " << ++five << endl; //increments 6 to 7 and then outputs 7
    cout << "5-- = " << five-- << endl; //outputs 5, then decrements it one
    cout << "--5 = " << --five << endl; //decrements 6 to 5, then outputs 5


    return 0;

}