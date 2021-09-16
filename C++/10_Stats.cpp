/* Program to find the mean, variance and standard deviation of given n numbers */

#include<iostream>
#include<cmath>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

float mean(int[], int);                     //prototype of function_1 to compute the mean of the given numbers
float variance(int[], int);                 //prototype of function_2 to compute the variance of given numbers
float standard_deviation(int[], int);       //prototype of function_3 to compute the variance of given numbers
void menu(int[], int);                      //prototype of function_4 to print the menu

int main()                                  //main function
{
    int elements[20], n;

    log("Enter the number of elements: ");
    read(n);

    log("\nEnter the elements: ");
    for(int i = 0; i < n; i++)
        read(elements[i]);

    menu(elements, n);                      //calling function_4

    return 0;
}                                           //end of main function_4

void menu(int a[], int n)                   //function_4 to print the menu
{
    int choice;
    float result;
    char choice1;

    log("\n1. Mean\n2. Variance\n3. Standard Deviation");
    do
    {
again:  log("\nEnter your choice: ");
        read(choice);

        switch(choice)
        {
            case 1  :   result = mean(a, n);                //calling function_2
                        log("\nMean is: " << result);
                        break;

            case 2  :   result = variance(a, n);            //calling function_3
                        log("\nVariance is: " << result);
                        break;

            case 3  :   result = standard_deviation(a, n);  //calling function_4
                        log("\nStandard Deviation is: " << result);
                        break;

            default :   log("\nWrong Choice!");
                        goto again;
        }
        log("\nDo you want to continue? ");
        read(choice1);
    }while(choice1 == 'y' || choice1 == 'Y');

}                                               //end of function_4

float mean(int a[], int n)                      //function_1 to compute the mean of the given numbers
{
    int sum = 0;
    float mean; 
    for(int i = 0; i < n; i++)
        sum += a[i];
    
    mean = sum / float(n);                      //computing the mean

return mean;
}

float variance(int a[], int n)                  //function_2 to compute the variance of given numbers
{
    float sum_of_squares = 0, square_of_sum = 0;
    float variance;

    for (int i = 0; i < n; i++)
        square_of_sum += a[i];
    
    square_of_sum *= square_of_sum;             //coputing the square of sum of elements

    for(int i = 0; i < n; i++)
        a[i] *= a[i];
    
    for(int i = 0; i < n; i++)
        sum_of_squares += a[i];                 //computing the sum of squares of elements
    
    variance = ( (sum_of_squares - ((square_of_sum)/n)) / (float(n) - 1) );    //computing the variance

return variance;
}                                               //end of function_2

float standard_deviation(int a[], int n)        //function_3 to compute the variance of given numbers
{

    float var = variance(a, n);                 //calling function_2
    float sd = pow(var, 0.5);                   //computing standard deviation

return sd;
}                                               //end of function_3