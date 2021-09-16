/* Program to read an array from the user and perform following operations on the array using the menu driven program
    1. Print Even elements
    2. Print Odd elements
    3. Print sum and average of all the elements
    4. Print Max and Min element in the array
    5. Remove duplicates from the array
    6. Reverse the array and store it in the same array
*/

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void print_even(int[], int);                //prototype of function_1 to print the even elements of the array
void print_odd(int[], int);                 //prototype of function_2 to print the odd elements of the array
void sum_average(int[], int);               //prototype of function_3 to print the sum and average of all elements of the array
void max_min(int[], int);                   //prototype of function_4 to print the max and min among all elements of the array
void remove_duplicate(int[], int);          //prototype of function_5 to delete the duplicate elements from the array and print it
void reverse_array(int[], int);             //prototype of function_6 to reverse the array, without using another array, and print it

int main()                                  //main function
{
    int array[10], size;
    char choice1;
    int choice;
    
    log("Enter the size of the array (max 10): ");
    read(size);                             //reading the size of the array from the user

    log("Enter the array: ");
    for(int i = 0; i < size; i++)
        read(array[i]);                     //reading the elements of the array from the user

    do
    {
        //menu 
again:  log("\n1. Print Even Elements\n2. Print Odd Elements\n3. Print Sum & Average of all elements of the arrray");
        log("\n4. Print Max & Min elements of the array\n5. Remove all the duplicates from the array and print it");
        log("\n6. Reverse the array and print it");
        log("\nEnter your choice: ");
        read(choice);                       //reading choice from the user from menu

        switch (choice)
        {
            case 1  :   print_even(array, size);        //calling function_1
                        break;

            case 2 :    print_odd(array, size);         //calling function_2
                        break;

            case 3 :    sum_average(array, size);       //calling function_3
                        break;
            
            case 4 :    max_min(array, size);           //calling function_4
                        break;
                
            case 5 :    remove_duplicate(array, size);  //calling function_5
                        break;

            case 6 :    reverse_array(array, size);     //calling function_6
                        break;     
            
            default:    log("\nWrong Choice!");         //default case
                        goto again;
                        break;
        }

        log("\nDo you wanna continue? ");
        read(choice1);                      //asking user of he/she wanna go again
    }while(choice1 == 'y' || choice1 == 'Y');
    
return 0;
}                                           //end of main function

void print_even(int a[], int s)             //prototype of function_1 to print the even elements of the array
{
    log("\nEven elements from the array: ");
    for(int i = 0; i < s; i++)
    {
        if(a[i] % 2 == 0)                   //if element is even
            log(a[i] << " ");
        else
            continue;
        
    }
}

void print_odd(int a[], int s)              //prototype of function_2 to print the odd elements of the array
{
    log("\nOdd elements from the array: ");

    for(int i = 0; i < s; i++)
    {
        if(a[i] % 2 != 0)                   //if element is even
            log(a[i] << " ");
        else
            continue;
        
    }
}

void sum_average(int a[], int s)            //prototype of function_3 to print the sum and average of all elements of the array
{
    int sum = 0;
    for(int i = 0; i < s; i++)
        sum += a[i];                        //computing sum of all elements of the array
    
    log("\nSum is: " << sum);
    log("\nAverage is: " << (sum/s));
}

void max_min(int a[], int s)                //prototype of function_4 to print the max and min among all elements of the array
{
    int max, min;
    max = min = a[0];

    for(int i = 1; i < s; i++)
    {
        if(a[i] > max)                      //finding max element
            max  = a[i];
        else if(a[i] < min)                 //finding min element
            min = a[i];
        else
            continue;
        
    }
    log("\nMaximum value is: " << max);
    log("\nMinimum value is: " << min);
}

void remove_duplicate(int a[], int s)       //prototype of function_5 to delete the duplicate elements from the array and print it
{
    int new_size = s;
    for(int i = 0; i < s; i++)
    {       
        int element = a[i];                 //store the value of current element in the integer variable 'element'
        for(int j = i + 1; j < s; j++)
        {
            if(a[j] == element)             //check if element is a duplicate
            {
                new_size--;
                for(int k = j; k < s; k++)  //if yes then remove it
                {
                    a[k] = a[k + 1];        //by shifting all the element 1 place before
                }
            }   
            else
            {
                continue;                   //bgo to next iteration
            }
            
        }
    }
    log("\nArray is: ");
    for(int i = 0; i < new_size; i++)
        log(a[i] << " ");                   //printinf the updated array
}                                           //end of function_5

void reverse_array(int a[], int s)          //prototype of function_6 to reverse the array, without using another array, and print it
{
    int temp;
    for(int i = 0; i< (s/2); i++)           //loop for reversing the array
    {
        temp = a[i];
        a[i] = a[s - i - 1];                //exchanging (first, last), (second, second last) element and so on...
        a[s - i - 1] = temp;
    }
    log("Array is: ");
    for(int i = 0; i <s; i++)
        log(a[i] << " ");                   //printing the reversed array
}                                           //end of function_6