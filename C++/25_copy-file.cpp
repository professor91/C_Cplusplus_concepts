/* Program to copy a program from one file and save it to another */

#include<iostream>
#include<fstream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        log("Error in message.");
        exit(1);
    }

    std:: ifstream fin(argv[1]);
    std:: ofstream fout(argv[2]);
    std:: string word;

    if(!fin && !fout)
    {
        log("Error in opening file.");
        exit(100);
    }

    while(!fin.eof())
    {
        fin >> word;
        fout << word;
    }

    fin.close();
    fout.close();

    if(fin.bad() || fout.bad())
    {
        log("Error in closing file.");
        exit(101);
    }
    return 0;
}