#include<iostream>

using namespace std;

// Declaration of class
class BaseClass {
    private:
            // private members of class
            string pvt_var= "Private var";
    protected:
            // protected members of class
            string prot_var= "Protected var";
    public:
            // public members of class
            string pub_var= "Public var";

            // default constructor - called whenever an object of class is declared
            BaseClass () {
                cout << "This is the default constructor of Base class\n";
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
class PublicDerivedClass: public BaseClass {
    
    public:
            PublicDerivedClass () {
                cout << "This is the default constructor of Public Derived class\n";
            }

            void inherited_vars () {
                cout << "------------------| In inherited_vars() function |------------------" << endl;
                cout << "Public Derived Class: " << pub_var << endl;
                cout << "Public Derived Class: " << prot_var << endl;
                // Below line will give an error because private members of Base clas are not inherited
                // cout << pvt_var << endl;
                get_pvt_var();
                get_prot_var();
            }
};

/*
This is what the PublicDerivedClass look like

class PublicDerivedClass: public BaseClass {
    
    public:
            string prot_var= "Protected var";
            string pub_var= "Public var";

            PublicDerivedClass () {
                BaseClass();            // calling BaseClass Constructor
                cout << "This is the default constructor of Public Derived class\n";
            }

            // functions of class
            void get_pvt_var () {
                cout << "Base Class Function: " << pvt_var << endl;
            }
            
            void get_prot_var () {
                cout << "Base Class Function: " << prot_var << endl;
            }
            
            void inherited_vars () {
                cout << "------------------| In inherited_vars() function |------------------" << endl;
                cout << "Public Derived Class: " << pub_var << endl;
                cout << "Public Derived Class: " << prot_var << endl;
                // Below line will give an error because private members of Base clas are not inherited
                // cout << pvt_var << endl;
                get_pvt_var();
                get_prot_var();
            }
};

*/

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
    PublicDerivedClass pub_dc;

    cout << pub_dc.pub_var << endl;
    // public functions of base class are inherited to derived class
    pub_dc.get_pvt_var();
    pub_dc.get_prot_var();

    pub_dc.inherited_vars();

return 0;
}
