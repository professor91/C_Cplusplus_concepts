#include<iostream>

using namespace std;
/*
In simple inheritance, a derived class inherits from Base class

        Base class 1    Base class 2
            \               /
             \             /
              \           /
               \         /
                \       /
                 \     /
                  \   /
                   \ /
                    |
                    |
                    V
                Derived Class


*/

// Declaration of class
class BaseClass1 {
    private:
            string pvt_var1= "Private var 1";
    protected:
            string prot_var1= "Protected var 1";
    public:
            string pub_var1= "Public var 1";

            // default constructor - called whenever an object of class is declared
            BaseClass1 () {
                cout << "This is the default constructor of Base class 1\n";
            }

            // functions of class
            void get_pvt_var1 () {
                cout << "Base Class 1 Function: " << pvt_var1 << endl;
            }
            
            void get_prot_var1 () {
                cout << "Base Class 1 Function: " << prot_var1 << endl;
            }
};

// Declaration of class
class BaseClass2 {
    private:
            string pvt_var2= "Private var 2";
    protected:
            string prot_var2= "Protected var 2";
    public:
            string pub_var2= "Public var 2";

            // default constructor - called whenever an object of class is declared
            BaseClass2 () {
                cout << "This is the default constructor of Base class 2\n";
            }

            // functions of class
            void get_pvt_var2 () {
                cout << "Base Class 2 Function: " << pvt_var2 << endl;
            }
            
            void get_prot_var2 () {
                cout << "Base Class 2 Function: " << prot_var2 << endl;
            }
};

// Declaration of another class - inheriting BaseClass publically
class PublicDerivedClass: public BaseClass1, public BaseClass2 {
    
    public:
            PublicDerivedClass () {
                cout << "This is the default constructor of Public Derived class\n";
            }

            void inherited_vars () {
                cout << "------------------| In inherited_vars() function |------------------" << endl;
                cout << "Public Derived Class 1: " << pub_var1 << endl;
                cout << "Public Derived Class 1: " << prot_var1 << endl;

                cout << "Public Derived Class 2: " << pub_var2 << endl;
                cout << "Public Derived Class 2: " << prot_var2 << endl;
                // Below line will give an error because private members of Base clas are not inherited
                // cout << pvt_var << endl;
                get_pvt_var1();
                get_prot_var1();

                get_pvt_var2();
                get_prot_var2();
            }
};

// main function
int main () {
    
    // declaring object of BaseClass
    BaseClass1 bc1;
    
    cout << bc1.pub_var1 << endl;
    // cannot access private and public var directly so using function of the class
    bc1.get_pvt_var1();
    bc1.get_prot_var1();

    cout << "\n-----------------------------------------------------------------\n";

    // declaring object of BaseClass
    BaseClass2 bc2;

    cout << bc2.pub_var2 << endl;
    // cannot access private and public var directly so using function of the class
    bc2.get_pvt_var2();
    bc2.get_prot_var2();

    cout << "\n-----------------------------------------------------------------\n";

    // when object of any derived class is declared, object of all other classes is created whom the derived class is inheriting
    PublicDerivedClass pub_dc;

    cout << pub_dc.pub_var1 << endl;
    cout << pub_dc.pub_var2 << endl;
    // public functions of base class are inherited to derived class
    pub_dc.get_pvt_var1();
    pub_dc.get_prot_var1();

    pub_dc.get_pvt_var2();
    pub_dc.get_prot_var2();

    pub_dc.inherited_vars();

return 0;
}
