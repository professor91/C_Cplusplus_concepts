#include<iostream>

using namespace std;
/*
In simple inheritance, a derived class inherits from Base class

        Base class 1
            |
            |
            V
        Derived Class 1
            |
            |
            V
        Derived Class 2


*/

// Declaration of class
class BaseClass {
    private:
            string pvt_var= "Private var";
    protected:
            string prot_var= "Protected var";
    public:
            string pub_var= "Public var";

            // default constructor - called whenever an object of class is declared
            BaseClass () {
                cout << "This is the default constructor of Base class 1\n";
            }

            // functions of class
            void get_pvt_var () {
                cout << "Base Class Function: " << pvt_var << endl;
            }
            
            void get_prot_var () {
                cout << "Base Class Function: " << prot_var << endl;
            }
};

// Declaration of another class - inheriting BaseClass publically
class PublicDerivedClass1: public BaseClass {
    
    public:
            string pub_class_var= "Public class var";
            PublicDerivedClass1 () {
                cout << "This is the default constructor of Public Derived class 1\n";
            }

            void inherited_vars () {
                cout << "------------------| In inherited_vars() function |------------------" << endl;
                cout << "Public Derived Class 1: " << pub_class_var << endl;
                cout << "Public Derived Class 1: " << pub_var << endl;
                cout << "Public Derived Class 1: " << prot_var << endl;
                // Below line will give an error because private members of Base clas are not inherited
                // cout << pvt_var << endl;
                get_pvt_var();
                get_prot_var();
            }
};

// Declaration of another class - inheriting BaseClass publically
class PublicDerivedClass2: public PublicDerivedClass1 {
    
    public:
            PublicDerivedClass2 () {
                cout << "This is the default constructor of Public Derived class\n";
            }

            void inherited_vars () {
                cout << "------------------| In inherited_vars() function |------------------" << endl;
                cout << "Public Derived Class 1: " << pub_class_var << endl;
                cout << "Public Derived Class 1: " << pub_var << endl;
                cout << "Public Derived Class 1: " << prot_var << endl;
                // Below line will give an error because private members of Base clas are not inherited
                // cout << pvt_var << endl;
                get_pvt_var();
                get_prot_var();
            }
};

// main function
int main () {
    
    // declaring object of BaseClass
    BaseClass bc;
    
    cout << bc.pub_var << endl;
    // cannot access private and public var directly so using function of the class
    bc.get_pvt_var();
    bc.get_prot_var();

    cout << "\n-----------------------------------------------------------------\n";

    // when object of any derived class is declared, object of all other classes is created whom the derived class is inheriting
    PublicDerivedClass1 pub_dc1;

    cout << pub_dc1.pub_var << endl;
    cout << pub_dc1.pub_class_var << endl;
    // public functions of base class are inherited to derived class
    pub_dc1.get_pvt_var();
    pub_dc1.get_prot_var();

    pub_dc1.inherited_vars();
    
    cout << "\n-----------------------------------------------------------------\n";

    // when object of any derived class is declared, object of all other classes is created whom the derived class is inheriting
    PublicDerivedClass2 pub_dc2;

    cout << pub_dc2.pub_var << endl;
    cout << pub_dc2.pub_class_var << endl;
    
    // public functions of base class (which in this case is PublicDerivedClass1) are inherited to derived class
    pub_dc2.get_pvt_var();
    pub_dc2.get_prot_var();

    pub_dc2.inherited_vars();

return 0;
}
