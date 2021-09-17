#include<iostream>

int main(){
    int matrix[4][5]={ {0,0,5,0,3}, {2,0,0,0,0}, {0,7,0,1,0}, {0,0,6,0,0} };
    
    int size= 0;

    for(int i= 0; i< 4; i++){
        for(int j= 0; j< 5; j++){
            if(matrix[i][j] != 0){
                size++;
            }
            else{
                continue;
            }
        }
    }

    int sparse_matrix[3][size];
    int k= 0;

    for(int i= 0; i< 3; i++){
        for(int j= 0; j< size; j++){
            if(matrix[i][j] != 0){
                sparse_matrix[0][k]= i;
                sparse_matrix[1][k]= j;
                sparse_matrix[2][k]= matrix[i][j];
                k++;
            }
        }
    }

    for(int i= 0; i< 3; i++){
        for(int j= 0; j<size; j++){
            std:: cout << sparse_matrix[i][j] << " ";
        }
        std:: cout << std:: endl;
    }

return 0;
}