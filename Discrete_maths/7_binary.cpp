#include<iostream>

void bubble(int array[100], int size)
{
    int temp = 0, count= 0;
    
    for (int i = 0; i < size; i++)    
    {   
        count = 0;
        for (int j = 0; j < size-i-1; j++)
        {   
            count++;
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void binary(int array[100], int first, int last, int x)
{
    bubble(array, last);
    std:: cout << "\nSorted array is: ";
    //print the sorted array
    for(int i= 0; i< last; i++)
        std:: cout << array[i] << " ";


    int mid= (first+last)/2;
    
    if (array[mid] == x){
        std:: cout << "\nFound at " << mid+1 << std:: endl;
    }
    else if (array[mid] > x){
        binary(array, first, mid - 1, x);
    }
    else if (array[mid] < x){
        binary(array, mid + 1, last, x);
    }
}

int main()
{
    int array[100], n, x;

    std:: cout << "Enter the size of the array: ";
    std:: cin  >> n;

    std:: cout << "\nEnter the array: ";

    for(int i= 0; i< n; i++)
        std:: cin >> array[i];
    
    std:: cout << "\nEnter the key you wanna find in the array: ";
    std:: cin >> x;
    binary(array, 0, n, x);

return 0;
}