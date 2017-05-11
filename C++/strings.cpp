#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string yourName;
    cout << "What is your name? \n";
    getline(cin, yourName);
    cout << "Hello " << yourName << endl;

    string wholeName = yourName.assign(yourName);
    string firstName = wholeName.assign(wholeName, 0, 6); //splicing string from 0 to 5
    cout << firstName << endl;
    int lastNameIndex = yourName.find("Bokey", 0); //searching string to see where Bokey starts
    cout << "Index for last name " << lastNameIndex << endl;

    // String insertion
    yourName.insert(6, " Nigga");
    cout << yourName << endl;
    // yourName.erase(6, 7); //erases the space between my first and last name
    // cout << yourName << endl;
    yourName.replace(7, 5, "Maximus");
    cout << yourName << endl;

    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Eulers's Constant? ";
    getline(cin, eulerGuess);
    eulerGuessDouble = stod(eulerGuess);

    if (eulerGuessDouble == eulersConstant) {
        cout << "You are right! \n";
    } else {
        cout << "You are wrong \n";
    }

    cout << "Size of string " << eulerGuess.size() << endl;
    string eulerEmpty = (eulerGuess.empty()) ? "yes" : "no";
    cout << "Is string empty? " << eulerEmpty << endl;

    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;


}