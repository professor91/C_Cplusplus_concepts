#include"sorting.h"

int linearSearch (int a[], int size, int elem) {
    /*  Linear Search
     *  Go through array one by one
     *  and check if the elem is present in the array
     *  If elem is present then return it's index
     *  otherwise return -1
    */

    bool found= false;
    int index;

    for(int i= 0; i< size; i++) {
        if(a[i] == elem) {
            found= true;
            index= i;
            break;
        }
    }

    if(!found) {
        return -1;
    }

return index;
}


int binarySearch (int a[], int size, int elem) {
    /*  Binary Search
     *  The array must be sorted for binary search
     *  Divide the array in two halfs
     *  Compare the middle term of the array and with the key to be searched
     *  if the key is larger then take the right part and do the same
     *  else take the left part
     *  Repeat it until the value is not found
     *  
    */

    int beg= 0, last= size;

    while (beg <= last) {
        int mid= (beg+last)/2;

        if (a[mid] == elem) {
            return mid;
        }
        else if (elem < a[mid]) {
            last= mid-1;
        }
        else {
            beg= mid+1;
        }
    }
return -1;
}
