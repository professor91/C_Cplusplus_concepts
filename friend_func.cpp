#include<iostream>

using namespace std;

class frnd
{
	int a, b;
	
	public:
			void input()
			{
				cout<<"Enter the value of a and b: ";
				cin>>a>>b;
			}
			
			friend float compute(frnd f);
};

float compute(frnd f)
{
	int sum;
	
	sum = f.a + f.b;
	return sum;
}

int main()
{
	frnd f;
	
	f.input();
	cout<<"vales after computation are: "<< compute(f); 
return 0;
}
