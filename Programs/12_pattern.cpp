#include<iostream>

#define log(x) std :: cout << x 
#define read(x) std :: cin >> x

void p_pattern(int);                //prototype of function_1 to print the pyramid_pattern
void l_pattern(int);                //prototype of function_2 to print the left_trialngle_pattern
void r_pattern(int);                //prototype of function_3 to print the right_trialgle_pattern
void d_pattern(int);                //prototype of function_4 to print the diamond_pattern
void p_num_pattern(int);            //prototype of function_5 to print the 123 pyramid
void pattern(int);                  //prototype of function_6 to print the number pattern
void alpha_pattern(char);           //prototype of function_7 to print the ABC pattern

int main()                          //main function
{
    int rows, choice;   
    char ch;             

    log("\n1. Pyramid Pattern\n2. Left Triangle Pattern\n3. Right Triangle Pattern\n4. Diamond Pattern\n5. 123 Pyramid Pattern");
    log("\nEnter your choice: ");
    read(choice);

    if(choice != 7)
    {
        log("Enter the number of rows: ");
        read(rows);                     //reading the number of the function
    }
    else 
    {
        log("Enter the character: ");
        read(ch);                       //reading the number of the function
    }

    switch(choice)
    {
        case 1  :   p_pattern(rows);        //calling function_1
                    break;
        
        case 2  :   l_pattern(rows);        //calling function_2
                    break;
        
        case 3  :   r_pattern(rows);        //calling function_3
                    break;

        case 4  :   if(rows%2 == 0)
                    {
                        log("\nRow should be positive odd number more than one.");
                        log("\nEnter the number of rows: ");
                        read(rows);
                    }
                    d_pattern(rows);        //calling function_4
                    break;

        case 5  :   p_num_pattern(rows);    //calling function_5
                    break;

        case 6  :   if(rows%2 == 0)
                    {
                        log("\nRow should be positive odd number more than one.");
                        log("\nEnter the number of rows: ");
                        read(rows);
                    }
                    pattern(rows);
                    break;

        case 7  :   if(toupper(ch) % 2 == 0)
                    {
                        log("\nCharacter should be the one which comes at odd position.");
                        log("\nEnter the character: ");
                        read(ch);
                    }
                    alpha_pattern(ch);
                    break;
                    
        default :   log("\nWrong choice!!!");
    }
return 0;
}                                   //end of main function

void p_pattern(int n)               //function_1 to print the pyramid_pattern
{
    for(int i = 1; i < n + 1; i++)				//loop for rows
    {
        for(int j = 0; j < n - i; j++)			//loop for space	
		{
			log(" ");
		}
		for(int k = 0; k < 2*i - 1; k++)		//loop for *
		{
			log("*");
		}
		log(std:: endl);
    }
}                                   //end of function_1

void l_pattern(int n)               //function_2 to print the left_trialngle_pattern
{
    int i,j;    

    for(i = 0; i < n; i++)          //loop for the rows
    {
        for(j = 0; j < i + 1; j++)  //loop for the columns
            log("*");               //printing the '*'
        log(std:: endl);        
    }
}                                   //end of function_2

void r_pattern(int n)               //function_3 to print the right_trialgle_pattern
{  
    for(int i = 0; i < n ; i++)             //loop for the rows
    {
        for(int j = n - i; j >= 0; j--)     //loop for the columns
            log(" ");                       //printing gap
        for(int k = 0; k <= i; k++)
            log("*");                       //printing '*'
        log(std:: endl);        
    }
}                                   //end of function_3

void d_pattern(int n)               //function_4 to print the diamond_pattern
{
    for(int i = 1; i < n + 1; i++)			//loop for rows
    {
    	int mid = (n/2) + 1;
        
		if(i < mid + 1)							//printing till mid
		{
			for(int j = 0; j < n - i; j++)			//loop for space	
			{
				log(" ");
			}
			for(int k = 0; k < 2*i - 1; k++)		//loop for upper * pattern
			{
				log("*");
			}
		}
		else									//printing rest pattern till last
		{
			for(int j = 0; j < i - 1; j++)				//loop for space	
			{
				log(" ");
			}
			for(int k = 0; k < 2*(n - i) + 1 ; k++)		//loop for lower * pattern
				log("*");
		}
		log(std:: endl);
    }
}    								//end of function_4

void p_num_pattern(int n)		    //function_5 to print the 123 pyramid
{
	for(int i = 1; i <= n; i++)			//loop for rows
	{	
		for(int j = 1; j <= n - i; j++)		//loop for space	
		{
			log(" ");
		}
		for(int k = 1; k <= i; k++)			//loop for printing left half of the pattern
		{
			log(k);
		}
		for(int m = i - 1; m >= 1; m--)		//loop for printing right half of the pattern
		{
			log(m);
		}

		log(std:: endl);
	}
}									//end of function_1

void pattern(int n)                 //function_6 to print the number pattern
{
    int coef = 1;
	
    for (int i = 0; i < n; i++)
    {
		for(int k = 1; k <= n - i - 1; k++)
            log(" ");
		
		for (int j = 0; j <= i; j++)
        {
			if (j==0 || i==0)
				coef = 1;
		
			else
				coef = (coef*(i-j+1))/j;
			
			log(" " << coef);
		}
		log(std:: endl);
	}
}

void alpha_pattern(char ch)         //function_7 to print the ABC pattern
{
    int med, n, n1, n2;
    
    ch = toupper(ch);
	n = (int)ch;
    med = (65 + n)/2;
	
    n1 = med;
    n2 = med + 1;
	
    for (int i = 0; i < (n-med) + 1; i++)
    {
		for(int j = 65; j <= n1 - i; j++)
            log(char(j));
			
    	for(int k = 1; k <= 2*i-1; k++)
			log(" ");
	
    	for (int l = n2+i; l<=n; l++)
        {
            log(char(l));
			n2 = med;
		}
    log(std:: endl);
    }
}
