/** 2d Array
 *  A two dimensional array is like matrix having m rows and n columns
 *  i.e. an array of size m and each element of this array is an array of size n
 *  
 *  2d array as a parameter to a function
 *  It must mention the size of columns, can skip row size for eg in show
 * 
 * 
 */
#include<iostream>

// a[][3] us right
// a[3][] us not right
void show (int a[][3], int row) {

    std:: cout << "\nArray is: " << std:: endl;
    for (int i= 0; i< row; i++) {
        for (int j= 0; j< 3; j++) {
            std:: cout << a[i][j] << " ";
        }
        std:: cout << std:: endl;
    }
}

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main() {
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    // accessing element at 2nd position in 1st array element of a 
    // **** (0 based indexing) ****
    std:: cout << a[1][2];

    show(a,3);
    
return 0;
}   