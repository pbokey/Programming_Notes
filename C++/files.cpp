#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



int main() {

    string steveQuote = "A day without sunshine, is night";
    ofstream writer("stevequote.txt");
    if (! writer) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer << steveQuote;
        writer.close();
    }

    ofstream writer2("stevequote.txt", ios::app);
    // Open a stream to append to whats there with ios::app
    // ios::binary -> treat the file as a binary file
    // ios::in -> open a file ot read input
    // ios::trunc -> Default
    // ios::out -> open a file to write output
    if (!writer2) {
        cout << "Error \n";
        return -1;
    }

    writer2 << "\n -Steve Martin" << endl;
    writer2.close();

    char letter;
    ifstream reader("stevequote.txt");
    if (! reader) {
        cout << "Error opening file";
        return -1;
    } else {
        for (int i = 0; ! reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        cout << endl;
        reader.close();
    }

    return 0;
}