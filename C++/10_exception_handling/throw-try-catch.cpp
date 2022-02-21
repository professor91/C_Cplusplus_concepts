#include <iostream>
using namespace std;

double division (int a, int b) {
    if ( b==0 ) {
        // throwing an error
        throw "Error: Division by zero!";
    }
    return(a/b);
}

int main () {
    int a,b;
    double z= 0;

    cout << "\nEnter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << endl;

    try {
        // code that may cause an error wrapped in try block
        z= division(a,b);
        cout << z;
    }
    catch (const char* msg) {
        // Logging exception on the screen
        cerr << "Caught " << msg << endl;
    }

return 0;
}