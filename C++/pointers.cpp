#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//this function changes the value of my age
void changeAge(int* age) { //im passing in a pointer to age
    cout << "I am " << *age;
    *age = 15;
    cout << ", but I used to be " << *age << endl;
}

void actYourAge(int& age) {
    age = 19;
}

int main() {
    // Reference Operator
    int myAge = 19;
    cout << "My age is located at: " << &myAge << endl;

    int sum = 5;
    // Local Variables
    // addThese(sum); //value of sum that is changed here, is still equal to 5

    // Pass by reference
    // Pointer can store memory address
    int* agePtr = &myAge; //this is the pointer to the age
    cout << "Data at memory address: " << *agePtr << endl;

    int badNums[5] = {4, 13, 14, 24, 34};
    int* numArrayPtr = badNums;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl; //4
    numArrayPtr++;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl; //13

    cout << "Address " << badNums << endl; //array name is just a pointer to the array
    changeAge(&myAge); //passing by reference
    // cout << myAge << endl; //this will print 15 because the previous funtion called change the value of the variable myAge

    int& ageRef = myAge; //this is a reference
    cout << "myAge: " << myAge << endl;
    ageRef++;
    cout << "myAge: " << myAge << endl;

    // Passing by reference
    actYourAge(ageRef);
    cout << "I am back to my original age of " << myAge << endl;

    // You should use pointers if you dont want to initilize at declaration
    // Pointer can be reassigned any number of times while a reference cannot
    // Pointers can point to NULL, references cannot
    // You can't take the address of an object like you can with pointers

    // Use references in function parameters and return types to define useful and self-documenting interfaces.
    // Use pointers to implement algorithms and data structures.



    return 0;
}