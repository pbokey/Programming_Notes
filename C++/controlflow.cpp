#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    //If - ElseIf - Else Statements
    if (((age >= 1) && (age < 16)) || (!(isNotIntoxicated))) {
        cout << "You can't drive\n";
    } else if ((age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5)))) {
        cout << "You cannot drive\n";
    }
    else {
        cout << "You can drive\n";
    }

    //Switch Statements
    int greetingOption = 2;
    switch(greetingOption){
        case 1:
            cout << "bonjour\n";
            break;
        case 2:
            cout << "hola\n";
            break;
        default:
            cout << "Hello\n";
    }

    //Ternary Operator
    int largestNumber = (5>2) ? 5 : 2;
    cout << largestNumber << endl;

    //C++ also supports the while loop and the Do..While loop
}