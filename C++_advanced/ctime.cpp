
#include<iostream>
#include<ctime>

int main()								
{
	int a = 10;
	double timer = clock();
	
	std::cout << timer << std::endl; //timer = 0
	
	std::cin.get();
	
	std::cout<< clock() << std::endl;  // clock = 317
	
	while( clock() >= (timer+1))
	{
		timer = clock();
		std::cout << timer << std::endl;   //timer  =  317	
		std::cout << a << std::endl;
		a--;
	}
return 0;
}									              
