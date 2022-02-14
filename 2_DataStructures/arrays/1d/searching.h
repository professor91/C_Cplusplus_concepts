#include"sorting.h"

int linearSearch (int a[], int size, int elem) {
    /*  Linear Search
     *  Go through array one by one
     *  and check if the elem is present in the array
     *  If elem is present then return it's index
     *  otherwise return -1
    */

    log("Searching");
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
     *  
     *  
     *  
    */


}
