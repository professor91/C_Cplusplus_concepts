#include<iostream>

#define log(x) std::cout << x
#define read(x) std:: cin >> x

// prototype for function-1 to check for completeness
void iscomplete(int g[10][10], int n);

// main
int main(){

    int matrix[10][10];
    int v;

    wrong_v: log("Enter the number of vertices in the graph (not more than 10): ");
    read(v);

    if(v > 10 || v < 0){
        log("\nEnter positive value of v not more than 10.");
        goto wrong_v;
    }

    log("\nFill the adjency matrix (0 or 1 only):\n");
    for(int i= 0; i< v; i++){
        log(std:: endl << "\t\t\t\t\t");
        for(int j= 0; j< v; j++){
            notbinary: 
            read(matrix[i][j]);

            if(matrix[i][j] != 0 && matrix[i][j] != 1){
                log("Please enter either 0 or 1 : " << std:: endl);
                goto notbinary;
            }
        }
    }

    try{
        iscomplete(matrix, v);
    }
    catch(const char* message){
        log(message << std:: endl);
    }

    return 0;
}

// function-1 to check for completeness
void iscomplete(int g[10][10], int n){

    for(int i= 0; i< n; i++){
        for(int j= 0; j< n; j++){
            // checking for self-loop & incompleteness
            if(i == j && g[i][j] == 1)
                throw "Graph is Incomplete : self-loop found";
            else if(i != j && g[i][j] == 0)
                throw "Graph is Incomplete : edge not found";
        }
    }
    log("Graph is Complete!" << std:: endl);
}