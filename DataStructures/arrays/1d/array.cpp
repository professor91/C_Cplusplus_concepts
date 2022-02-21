/** Array
 *  An array is a collection of items (list) of similar data types
 *  When we declare an array a list of continuous memory blocks is assigned to the array of size (size_of_array * size_of_data_type_bytes)
 *  The name of the array stores pointer address to the first block of the above mentioned memory block
 * 
 ** Array as arguments to functions
 *  When we pass an array to a function the pointer address to the first element of array is passed to the function
 *  It means if we pass an array to and modify it, the modifications will reflect on the origional array
 *  If we wish array not to be modified in the function we can pass it as a const argument
 *  We cannot return an array from a function
 *  If we want to do some modification to an array but want the origional array to be intact we can pass a secondary array and do modifications on it
 * 
 * 
 */

#include"default.h"
#include"searching.h"

// display array 
void show (int a[], int size) {

    log("Array is: ");
    for(int i= 0; i< size; i++){
        log(a[i] << " ");
    }
    log(std:: endl);
}

// copy array to another array
void copy (int copyThis[], int copyTo[], int size) {
    for (int i= 0; i< size; i++) {
        copyTo[i] = copyThis[i];
    }
}

// insert given element at the given index
void insert (int a[], int& size, int index, int elem) {

    for(int i= size-1; i>index-1; i--){
        a[i+1]= a[i];
    }
    ++size;
    a[index] = elem;

}

// isElem is true if x is element to be deleted
//          false if x is the index of element to be deleted
void del (int a[], int& size, int x, bool isElem) {
    int elem_at= -1;

    if (isElem) {
        for(int i= 0; i< size; i++) {
            if(a[i] == x) {
                elem_at = i;
            }
        }
    }
    else {
        elem_at= x;
    }
    
    // deleting element
    for(int i=elem_at; i<size-1; i++){
        a[i] = a[i+1];
    }
    --size;
}

int main() {
    // static array
    const int capacity= 10;                     // capacity is how huch array can an array have
    int a[capacity]= {1,6,4,3,8,9,7};           // last element is 0 or NULL to show end of array
    int size= 7;                                // size is how much elements an array have
    int temp[capacity];

    // display array
    show(a, size+1);    // notice the array would have 0 at the end- that denotes end of array in memory

    // insert
    log("\n-------- Inserting --------" << std:: endl);
    int index= 5;
    int elem= 2;
    // insert 5 at position 5 in the array (indexing from zero)
    insert(a,size, index, elem);    // 1,6,4,3,8, 2 ,9,7
    insert(a,size,4,5);             // 1,6,4,3, 5 ,8,2,9,7
    insert(a,size,3,2);             // 1,6,4, 2 ,3,5,8,2,9,7

    show(a,size);

    // delete
    log("\n-------- Deleting --------" << std:: endl);
    index= 3;
    elem= 5;
    del(a, size, index, false);
    del(a, size, elem, true);
    show(a,size);

    log("\n-------- Sorting --------" << std:: endl);
    log("1. Selection Sort" << std:: endl);
    copy(a, temp, size);
    selectionSort(temp, size);
    show(temp, size);

    log("2. Bubble Sort" << std:: endl);
    copy(a, temp, size);
    bubbleSort(temp, size);
    show(temp, size);

    log("3. Insertion Sort" << std:: endl);
    copy(a, temp, size);
    insertionSort(temp, size);
    show(temp, size);

    // search
    int result;
    
    log("\n-------- Searching --------" << std:: endl);
    log("1. Linear Search" << std:: endl);
    result= linearSearch(a, size, 4);
    if (result == -1) {
        log("Element not found" << std:: endl);
    }
    else {
        log("Element found at index: " << result << std:: endl);
    }

    log("1. Binary Search" << std:: endl);
    result= binarySearch(temp, size, 6);        // passing temp becoz binary search require sorted array
    if (result == -1) {
        log("Element not found");
    }
    else {
        log("Element found at index: " << result);
    }

    // dynamic array allocation
    // int *a;

    log(std::endl);
return 0;
}


