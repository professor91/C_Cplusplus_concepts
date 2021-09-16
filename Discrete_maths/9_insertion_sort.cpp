
#include<iostream>

void insertion(int array[100],int size)
{
	int temp= 0, count= 0, j;

	for(int i=0; i< size; i++)
	{
       count= 0;
	   temp= array[i];
	   
       j= i-1;
	   while(count++,j>=0 && array[j]>temp)
       {
          array[j+1]=array[j];
          j--;
       }
        array[j+1]=temp;
		std:: cout << "\nNumber of comparisons: " << count << " : ";
        for(int k= 0; k< size; k++)
            std:: cout << " " << array[k];
	}

    std::cout << "\nSorted array is: ";
	for(int i=0;i< size; i++)
	    std:: cout << array[i] << " ";
}


int main()
{
    int array[100], size;
	
    std:: cout<<"Enter the size of the array: ";
	std:: cin>>size;

    std:: cout<<"Enter the array: ";
	for(int i= 0;i< size; i++)
        std:: cin >> array[i];
	
	insertion(array,size);

return 0;
}
