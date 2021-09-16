/* Program to read the data from students file and print it */

#include<iostream>
#include<fstream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void print_data(std:: ifstream&);           //prototype of function_1 to print the data from the file

int main()                                  //main function
{
    std:: ifstream fin("student.txt");

    print_data(fin);                        //calling function_1

return 0;
}                                           //end of main function

void print_data(std:: ifstream& fin)        //function_1 to print the data from the file
{
    std:: string data;
    int i = 0;

    while(fin && i < 10)
    {
        log("\nStudent Record " << ++i);

        fin >> data;
        log("\nRoll number of the student is: " << data);

        fin >> data;
        log("\nName of the student is: " << data);
        
        fin >> data;
        log("\nClass of the student is: " << data);
        
        fin >> data;
        log("\nYear of birth of the student is: " << data);
        
        fin >> data;
        log("\nTotal marks of the student: " << data << "\n");
    }
}                                               //end of function_1
