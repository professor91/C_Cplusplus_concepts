#include<iostream>
using namespace std;

int main() {

    cout << "Standard output stream\n";
    cerr << "Standard error stream\n";
    clog << "Standard log stream\n";

    // All 3 streams are defaulted to display output on console

    // << is a Stream insertion operator
    // overloaded for all data types in C++
    // and can also be overloaded for user-defined data types

    // <<  gives formatted output function

    // put() and write() (unformatted output functions) outputs the bytes as they are, without format conversion

    cout << 0.00001234567 << endl;
    // don't know why did this line
    cout.flush();
    // not working
    cout.put(0.00001234567);

return 0;
}