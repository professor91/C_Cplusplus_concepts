#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ofstream fout("somefile.txt");
    // fout.open("somefile.txt");
    string line;
    
    while (fout) {
        // read line from standard input
        getline(cin, line);

        if (line == "-1") {
            break;
        }
        
        // writing in file
        fout << line << endl;
    }

    // closing file
    fout.close();

    
return 0;
}