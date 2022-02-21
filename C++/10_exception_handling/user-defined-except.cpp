#include <iostream>
#include <exception>
using namespace std;

// user-defined exception using standard exception class
struct DivZero : public exception {
    const char* what() const throw () {
        return "Error: Division by zero";
    }
};

double division (int a, int b) {
    if ( b==0 ) {
        // throwing an error
        DivZero x;
        throw x;
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
    catch (exception& e) {
        // Logging exception on the screen
        cerr << "Caught " << e.what() << endl;
    }

return 0;
}