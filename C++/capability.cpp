#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// interfaces in C++ are implemented using abstract classes
// a class is made abstract by declaring at least one of its functions as pure virtual

class Animal {
    public:
        // these are examples of pure virtual functions
        virtual string getRegion() = NULL;
        virtual int getHeight() = 0;
};

int main() {
    return 0;
}
