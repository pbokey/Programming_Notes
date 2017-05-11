#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// functions come before main function
int addNumbers(int firstNum, int secondNum=0) { //default values have to come last
    int combinedValue = firstNum + secondNum;
    return combinedValue;
}

// function overloading
int addNumbers(int firstNum, int secondNum, int thirdNum) {
    return firstNum + secondNum + thirdNum;
}

//recursive functions
int getFactorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * getFactorial(num-1);
}

int main() {
    cout << addNumbers(1) << endl;
    cout << addNumbers(1,2,3) << endl;
    cout << getFactorial(5) << endl;
}