#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

namespace name_1 {
    void func() {
        cout << "Inside namespace 1 \n";
    }
}

namespace name_2 {
    void func() {
        cout << "Inside namespace 2 \n";
    }
}

// namespaces with the same name can be defined in mutiple files and also in the same file
// the namespace is just an addition to a previously defined namespace
namespace name_1 {
    void disCont() {
        cout << "Added to the first declaration of this namespace \n";
    }
}

//nested namespaces
namespace outer {
    namespace inner {
        void func() {
            cout << "Inside the inner namepsace of the outer namespace \n";
        }
    }
}

int main() {
    name_1::func();
    name_2::func();
    name_1::disCont();
    outer::inner::func();
}

// namespaces with the same name can be defined in mutiple files and also in the same file
// the namespace is just an addition to a previously defined namespace