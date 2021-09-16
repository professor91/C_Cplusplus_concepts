#include <iostream>
#include <cmath>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Set
{
	private:
            int *set;
	        int size;
	public:
            Set()
            {
                size = 0;
                set = 0;
            }
            
            Set(int num)
            {
                size = num;
                set = 0;
            }

            void set_size();                    //prototype of function_1 to initialize the size of the set
            void get_elements();                //prototype of function_2 to get the elememts of the set
            void showset();                     //prototype of function_4 to print the elements of the set
            void unique();                      //prototype of function_3 to remove duplicate elements from the set
            Set unionset(Set&);                 //prototype of function_3 to return the union of two sets
            Set intersectionset(Set&);          //prototype of function_3 to return the intersection of two sets
            bool subset(Set&);                  //prototype of function_3 to tells if set is subset of another set
            Set compliment(Set&);               //prototype of function_3 to return the complement of the set
            Set setdiffer(Set&);                //prototype of function_3 to return the set difference
            Set symmtericdiffer(Set&);          //prototype of function_3 to return the symmetric difference
            void cartesianprod(Set&);           //prototype of function_3 to return the cartesian product
};

void Set::set_size()
{
    again: read(size);
    if(size== 0)
        goto again;
    else
        set = new int[size];
}

void Set::get_elements()
{
    for(int i = 0;i < size; i++)
      read(set[i]);
}

void Set::unique()                      //function_3 to remove duplicate elements from the set
{
    for(int i= 0; i< size; i++)
    {
        for(int j= i+1; j< size; j++)
        {
            if(set[i] == set[j])            //duplicate found
            {
                for(int k= 0; k< size-1; k++)   //removal initiated
                    set[k]= set[k+1];
                --size;
            }
        }
    }
}

void Set::showset()                     //function_4 to print the elements of the set
{
    unique();
    for(int i= 0; i< size; i++)
    {
        if(i== 0)
            log(set[i]);
        else     
            log("," << set[i]);
    }
}

Set Set::unionset(Set& s)
{
	int tempsize = size + s.size;
	Set tempset(tempsize);
	
    for(int i = 0; i < size; i++)
        tempset.set[i] = set[i];
    
    for(int i = 0; i < s.size; i++)
        tempset.set[size+i] = s.set[i];
    
    tempset.unique();

return tempset;
}

Set Set::intersectionset(Set& s)
{
	int cnt = 0;
	for(int i = 0 ; i < size; i++){
		for(int j = 0; j < s.size; j++){
			cnt++;
		}
	}

	Set temp(cnt);
	for(int i = 0 ; i < size; i++)
    {
		for(int j = 0; j < s.size; j++)
        {
			if(set[i] == s.set[j])
				temp.set[cnt - i - 1] = set[i]; 
		}
	}
	temp.unique();
return temp;
}

bool Set::subset(Set& s)
{
    int temp = 0;

	for(int i = 0; i < size; i++)
    { 
		for(int j = 0; j < s.size; j++)
        {
			if(s.set[i] != set[j])
                temp++;
		}
		if(temp == size){
			return false;
		}
		temp = 0;
	}
return true;
}

Set Set::compliment(Set& s)
{
	int tempsize = size;
	Set temp(tempsize);

	for(int i = 0; i < size; i++){
		temp.set[i] = set[i];
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < s.size; j++){
			if(set[i] == s.set[j]){
				temp.set[i] = 0;
			}
		}
	}
	temp.unique();
return temp;
}

Set Set::setdiffer(Set& s)
{
	Set temp(size);

	for(int i = 0; i < size; i++){
		temp.set[i] = set[i];
	}
	for(int i = 0; i < temp.size; i++){
		for(int j = 0; j < s.size; j++){
			if(temp.set[i] == s.set[j]){
				temp.set[i] = 0;
			}
		}
	}
	temp.unique();
return temp;
}

Set Set::symmtericdiffer(Set& s)
{
	int tempsize = size + s.size;
	Set remove = this->intersectionset(s);
	Set temp(tempsize);
	for(int i = 0; i < size; i++)
		temp.set[i] = set[i];
	
	for(int i = 0; i < s.size; i++)
        temp.set[size + i] = s.set[i];
	
	for(int i = 0; i < tempsize; i++){
		for(int j = 0; j < remove.size; j++){
			if(temp.set[i] == remove.set[j]){
				temp.set[i] = 0;
			}
		}
	}
	remove.~Set();
	temp.unique();
return temp;
}

void Set::cartesianprod(Set& s)
{
	log("{");
	for(int i = 0; i < size; i++)
    {
		for(int j = 0; j < s.size; j++)
        {
			log(" ( ");
			log(set[i] << " , " << s.set[j]);
			log(" ) ,");
		}
	}
	log("} ");
}

int main()
{	
    log("Set A\n");
    Set A;
    log("\nEnter size: ");
    A.set_size();
    log("\nEnter elements: ");
	A.get_elements();
	A.unique();
    log("\nSet A is: ");
	A.showset();
	
    log("\nSet B\n");
    Set B;
    log("\nEnter size: ");
    B.set_size();
    log("\nEnter elements: ");
	B.get_elements();
	B.unique();
    log("\nSet B is: ");
	B.showset();

	int menu;
    char choice= 'y';
    do
    {
        log("\nOperation");
        log("\n1 Check Subset\n2 Get Union\n3 Get Intersection\n4 Get Compliment\n5 Get Set Difference\n6 Get Symmetric Difference\n7 Get Cartesian Product");
        log("\nEnter Choice: ");
        read(menu);

        switch(menu)
        {
            case 1  :{  if(A.subset(B))
                            log("\nA is subset of B");
                        if(A.subset(B))
                            log("\nB is subset of A");
                        else
                            log("\nNone is subset of none.");
                        break;
                    }   
                
            case 2  :{  log("\nUnion is: ");
                        Set C = A.unionset(B);
                        C.showset();
                        break;
                    }

            case 3  :{  log("\nIntersection is: ");
                        Set C = A.intersectionset(B);
                        C.showset();
                        break;
                    }   

            case 4  :{  log("\nEnter Universal Set U: ");
                        Set U;
                        U.set_size();
                        U.get_elements();
                        U.unique();
                        U.showset();
                        Set A_comp = U.compliment(A);
                        A_comp.showset();
                        Set B_comp = U.compliment(B);
                        log("\n");
                        B_comp.showset();
                        break;
                    }

            case 5  :{  log("\n1. A- B\n2. B - A");
                        int ch;
                        read(ch);
                        Set C;
                        choiceagain:
                        if(ch == 1)
                            C = A.setdiffer(B);
                        else if(ch == 2)
                            C = B.setdiffer(A);
                        else
                        {    
                            log("\nWrong choice");
                            goto choiceagain;
                        }
                        log("Difference is: ");
                        C.showset();
                        break;
                    }

            case 6  :{  log("\nSymmetric Difference is: ");
                        Set C = A.symmtericdiffer(B);
                        C.showset();
                        break;
                    }

            case 7  :{  log("\n1. A X B\n2. B X A");
                        int ch;
                        read(ch);
                        log("Cartesian Product is: ");
                        chooseagain:
                        if(ch == 1)
                            A.cartesianprod(B);
                        else if(ch == 2)
                            B.cartesianprod(A);
                        else
                        {    
                            log("\nWrong choice");
                            goto chooseagain;
                        }
                        break;
                    }
                
            default :   log("\nWrong Choice");
                        break;
            }
        log("\nChoose again? ");
        read(choice);
    }while(choice == 'y' || choice == 'Y');

return 0;
}