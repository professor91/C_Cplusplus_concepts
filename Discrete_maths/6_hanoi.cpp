#include <iostream>

int calcMoves(int);      // prototype of function 1 to compute number of moves

int main(){
	int d;

	std:: cout<<"\nEnter the number of discs: ";
	std:: cin>>d;
	
    std:: cout<<"\nNumber of moves required to make Tower of Hanoi: "<< calcMoves(d) << std:: endl;
}

int calcMoves(int d){
	if(d==1)
	    return 1;                       // base case
	else 
	    return 2*calcMoves(d-1)+1;       // recursive call
}