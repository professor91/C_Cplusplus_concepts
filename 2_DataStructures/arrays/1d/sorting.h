#include"default.h"

/** Selection Sort
 * 
 *  Find the smallest element and
 *  swap it with the element at the beginning
 * 
 ** Find smallest and put at first
 */

void selectionSort (int a[], int size) {

    for (int i= 0; i< size-1; i++) {
        for (int j= i+1; j< size; j++) {
            if (a[j] < a[i]) {
                int temp= a[j];
                a[j]= a[i];
                a[i]= temp;
            }
        }
    }
}

/** Bubble Sort
 *  Repeatedly swap two adjacent elements if they are in wrong order
 * 
 ** Swap adjacent elements in ascending order
 */

void bubbleSort (int a[], int size) {

    for (int i= 0; i< size-1; i++) {
        for (int j= 0; j< size-i; j++) {
            if (a[j] > a[j+1]) {
                int temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    }
}

/** Insertion Sort
 * Insert an element from unsorted array 
 * to its correct position in sorted array
 * 
 * All the elements before any element should be smaller than it
 */

void insertionSort (int a[], int size) {

    for (int i= 1; i< size; i++) {
        int current= a[i];
        int j= i-1;

        while (a[j] > current && j >= 0) {
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= current;
    }
}