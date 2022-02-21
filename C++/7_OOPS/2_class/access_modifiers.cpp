#include<iostream>

using namespace std;

// Declaration of class
class SomeClass {
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
            SomeClass () {
                cout << "This is the default constructor\n";
            }

            // functions of class
            void get_pvt_var () {
                cout << pvt_var << endl;
            }
            
            void get_prot_var () {
                cout << prot_var << endl;
            }
};

int main () {
    
    // declaring object of SomeClass
    SomeClass sc;
    
    cout << sc.pub_var << endl;
    // cannot access private and public var directly so using function of the class
    sc.get_pvt_var();
    sc.get_prot_var();

return 0;
}

/*

Access	            public	    protected	    private

Same class	        yes	        yes	            yes         i.e. Within a class all (public private protected vars can be accessed)
Derived classes	    yes	        yes	            no          i.e. Derived class, inheriting a base class, cannot access private vars of base class
Outside classes	    yes	        no	            no

*/
