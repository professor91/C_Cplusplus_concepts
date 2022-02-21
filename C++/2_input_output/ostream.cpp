#include<iostream>
using namespace std;

int main() {

    cout << "Standard output stream\n";
    cerr << "Standard error stream\n";
    clog << "Standard log stream\n";

    // All 3 streams are defaulted to display output on console

    /* << is a Stream insertion operator
     * overloaded for all data types in C++
     * and can also be overloaded for user-defined data types
    */

    /* <<  gives formatted output
     * put() and write() gives unformatted output
     * (outputs the bytes as they are, without format conversion)
     *
    */

    cout << 0.00001234567;
    /* endl manipulator
     * inserts newline character and flushes the output stream
     * '\n' may not flush the stream but endl sure do
    */
    cout.flush();       // flush the output stream buffer on screen
    cout.put(0.00001234567).put('\n');

return 0;
}