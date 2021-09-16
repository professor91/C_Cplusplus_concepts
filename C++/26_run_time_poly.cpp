/* Program to depict run time polymorphism */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Person
{
    protected:
                std:: string name;
                int age;
    public:
                virtual void get_data()
                {
                    log("\nEnter the name of the Person: ");
                    read(name);
                    log("\nEnter the age of the Person: ");
                    read(age);
                }

                virtual void show_data()
                {
                    log("\nName of the Person: " << name);
                    log("\nAge of the Person: " << age);
                }
};

class Teacher: public Person
{
    protected:
                std:: string subject;
    public:
                void get_data()
                {
                    log("\nEnter the name of the Teacher: ");
                    read(name);
                    log("\nEnter the age of the Teacher: ");
                    read(age);
                    log("\nEnter the subject that the Teacher teach: ");
                    read(subject);

                }

                void show_data()
                {
                    log("\nName of the Teacher: " << name);
                    log("\nAge of the Teacher: " << age);
                    log("\nSubject that the Teacher teach: " << subject);
                }
};

class Student: public Person
{
    protected:
                int standard;
    public:
                void get_data()
                {
                    log("\nEnter the name of the Student: ");
                    read(name);
                    log("\nEnter the age of the Student: ");
                    read(age);
                    log("\nEnter the standard of the student: ");
                    read(standard);
                }

                void show_data()
                {
                    log("\nName of the Student: " << name);
                    log("\nAge of the Student: " << age);
                    log("\nStandard of the student: " << standard);
                }
};

int main()
{
    log("Enter the details of Person.");
    Person* p = new Person();
    p -> get_data();
    p -> show_data();

    delete p;

    log("\n\nEnter the details of Teacher.");
    Teacher t;
    p = &t;
    p -> get_data();
    p -> show_data();

    delete p;

    log("\n\nEnter the details of Student.");
    Student s;
    p = &s;
    p -> get_data();
    p -> show_data();

    delete p;
    
return 0;
}