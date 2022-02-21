/*Program to perform baisc matrix operations */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Matrix                                //class Matrix
{
    private:
            int matrix[10][10];
            int rows, columns;

    public:
            Matrix(int r, int c)            //constructor to initialize matrix
            {
                rows = r;
                columns = c;
            }
            
            void read_matrix();                     //prototype of function_1 to read a matrix
            void add(Matrix&);                      //prototype of function_2 to add two matrices
            void subtract(Matrix&);                 //prototype of function_3 to subtract two matrices
            bool check_multiply_condition(int);     //prototype of function_4 to check multiplication condition for matrices
            void multiply(Matrix&);                 //prototype of function_5 to multiply two matrices
            void transpose();                       //prototype of function_6 to find transpose of a matrix
};

int main()                                      //main function
{
    int r, c,choice;

    log("Enter the rows and column (max 10) of the matrix: ");
    read(r >> c);
    Matrix m1(r,c);

    log("\nEnter Matrix 1:\n");
    m1.read_matrix();                           //reading elements of Matrix 1

    log("\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose");
    log("\nEnter you choice: ");
    read(choice);                               //reading user's choice
    
    Matrix m2(r,c);   

    if(choice == 4)
        goto skip_if_4;     
    log("\nEnter Matrix 2:\n");
    m2.read_matrix();                           //reading elements of Matrix 2

    skip_if_4: switch(choice)
    {
        case 1  :   m1.add(m2);                 //calling function_2
                    break;
        
        case 2  :   m1.subtract(m2);            //calling function_3
                    break;

        case 3  :   again: log("\nEnter the row and column of second Matrix: ");
                    read(r >> c);
                    if(m1.check_multiply_condition(r)); //checking if condition for multiplying two matices is right
                    {
                        log("\nPlease enter right value of row (it should be same as column of other matrix)");
                        goto again;
                    }
                    m1.multiply(m2);            //calling function_5
                    break;

        case 4  :   m1.transpose();             //calling function_6
                    break;

        default :   log("\nWrong Choice!!");
    }       

return 0;
}                                                   //end of main function

void Matrix:: read_matrix()                         //function_1 to read a matrix
{
    for(int i = 0; i < rows; i++)
    {
        for(int  j = 0; j < columns; j++)
        {
            read(matrix[i][j]);
        } 
    }
}                                                   ////end of function_1

void Matrix:: add(Matrix& m)                        //function_2 to add two matrices
{
    log("Resultant Matrix is:\n/");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            log(matrix[i][j] + m.matrix[i][j] << " ");
        }       
        log(std:: endl);
    }
}                                                   ////end of function_2

void Matrix:: subtract(Matrix& m)                   //function_3 to subtract two matrices
{
    log("Resultant Matrix is:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            log(matrix[i][j] - m.matrix[i][j] << " ");
        }       
        log(std:: endl);
    }
}                                                   ////end of function_3

bool Matrix:: check_multiply_condition(int a)       //function_4 to check multiplication condition for matrices
{
    if(rows == a)
        return true;
return false;
}                                                   //end of function_4

void Matrix:: multiply(Matrix& m)                   //function_5 to multiply two matrices
{
    log("Resultant Matrix is:\n/");

    Matrix result(columns, m.rows);
    if(columns != m.rows)                   //checking required matrix condition
    {
        log("\nColumn of first and row of second are not same.");
        exit(99);
    }
    int sum;

    for(int i = 0; i < rows; i++)
    {   
        for(int j = 0; j < m.columns; j++)
        {
            sum = 0;
            for(int k = 0; k < rows; k++)
                sum += matrix[i][k] + m.matrix[j][k];
            
            result.matrix[i][j] = sum;
        }
    }

    for(int i = 0; i < rows; i++)
    {   
        for(int j = 0; j < m.columns; j++)
        {
            log(result.matrix[i][j] << " ");
        }
        log(std:: endl);
    }
}                                                   ////end of function_5

void Matrix:: transpose()                           //function_6 to find transpose of a matrix
{
    int trans_matrix[rows][columns];
    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            trans_matrix[j][i] = matrix[i][j];  //taking transpose of the matrix
    
    log("Resultant Matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            log(trans_matrix[i][j] << " ");
        log(std:: endl);
    }
}                                                   //end of function_6
