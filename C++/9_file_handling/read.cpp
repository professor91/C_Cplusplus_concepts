#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ifstream fin("somefile.txt");
    // fin.open("somefile.txt");

    string line;

    while(fin) {
        // reading line from file
        getline(fin, line);

        cout << line << endl;
    }

    // closing file
    fin.close();
    
return 0;
}