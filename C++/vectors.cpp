#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // vectors - size can change
    vector <int> lotteryNumVect(10);
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

    cout << lotteryNumVect.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

    //adds value at end of vector
    lotteryNumVect.push_back(64);

    //remove final value
    lotteryNumVect.pop_back();

    //find first value in vector
    lotteryNumVect.front();

    //find last value in vector
    lotteryNumVect.back();

    //check if vector is empty or not
    lotteryNumVect.empty();

    //size
    lotteryNumVect.size();

    return 0;
}