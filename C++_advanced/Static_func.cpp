#include<iostream>

using namespace std;

class statex							//declared a class statex
{
	private:		
			int x;						//declared private integer variable x
			
	public:
			static int sum;				//declared public static integer variable sum
			
			statex()					//constructor which will store the value of sum++ in x whenever evoked
			{
				x = sum++;
			}
		
			static void stat()			//static function which will print the value of sum
			{
				cout<<"\nResult is: "<<sum;
			}		
			void number()				//memebr function of class statex which will display the number
			{
				cout<<"\nNumber: "<<x;
			}
};

int statex::sum = 9;					/*	declaring the static variable sum, of class statex, global (a must)
										   	by default it sum would be initialized to 0		*/

int main()								//main function
{
	statex o1,o2,o3;					//declaring 3 objects o1, o2, o3 of class statex
		
	statex::stat();						//calling static member function 'stat' of class statex
	o1.number();						//calling void function number to print the value of x
	
    cout<<"\nstatic var sum: "<<o1.sum;		//value of sum for object o2 of class statex
	cout<<"\nstatic var sum: "<<o2.sum;		//value of sum for object o2 of class statex		
	
	statex o4;								//decaling another object o4 of class statex
	cout<<"\nstatic var sum: "<<o4.sum;		//value of sum for object o2 of class statex

/*******************************************

	Whenever ab object of a class is declared the constructor of the class is called 
	and the value of sum changes by +1. 
	That's why the value of o2.sum is 3 &
				the value of o4.sum is 4.
				
*********************************************/
	
	return 0;
}
