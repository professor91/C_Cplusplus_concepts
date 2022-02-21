/* Program to merge two arrays in a sorted way */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void sort_merge(int[], int[]);               //prototype of function_1 to merge two arrays

int main(){                                 //main function

    int array1[5], array2[5];

    log("Enter the elements of array 1: ");
    for(int i = 0; i < 5; i++)
        read(array1[i]);                    //reading elements of array_1

    log("Enter the elements of array 2: ");
    for(int i = 0; i < 5; i++)
        read(array2[i]);                    //reading elements of array_1

    sort_merge(array1, array2);             //calling function_1

return 0;
}                                           //end of main function

void sort_merge(int a[5], int b[5])         //function_1 to merge the arrays in a sorted way
{
    int result[10];

    for(int i = 0; i < 5; i++)              //merging arrays
    {
        result[i] = a[i];
        result[i+5] = b[i];
    }

    int temp = 0;
    for(int  i = 0; i < 10; i++)            //using bubble sort for sorting arrays
    {
        for(int  j = 0; j < 9 - i; j++)
        {
            if(result[j] > result[j+1])
            {
                temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
    log("\n");
    for(int  i = 0; i < 10; i++)            //printing the sorted array
        log(result[i] << " ");
}                                           //end of function_1