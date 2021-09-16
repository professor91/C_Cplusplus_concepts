/* Program to store students details using class */

#include<iostream>
#include<fstream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class student                                   //class student
{       
    private:
            int roll;
            std:: string name;
            int standard;
            int year_of_birth; 
            int total_marks;
    public:
            void get_data(std:: ofstream&);     //prototype of function_1 to read the data from the user
};  

int main()                                      //main function
{
    int n;
    student s[10];

    log("Enter how many records you wanna store in the file: ");
    read(n);                                    //reading number of records user wanna enter

    std:: ofstream fout("student.txt");
    if(!fout)
    {
        log("\nCouldn't open file");
        exit(100);
    }

    for(int i = 0; i < n; i++)
        s[i].get_data(fout);                    //calling function_1

return 0;
}                                               //end of main function

void student:: get_data(std:: ofstream& fout)   //function_1 to read data 
{
    log("\nEnter the roll number of the student: ");
    read(roll);
    fout << roll << " ";

    log("Enter name of the student: ");
    read(name);
    fout << name << " ";

    log("Enter the class of the student: ");
    read(standard);
    fout << standard << " ";

    log("Enter the year of birth of the student: ");
    read(year_of_birth);
    fout << year_of_birth << " ";

    log("Enter the total marks of the student: ");
    read(total_marks);
    fout << total_marks << "\n";

    log("\nRecord stored in file.");
}                                               //end of function_1

