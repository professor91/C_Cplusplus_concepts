/*
0 1 1 0
0 0 1 1
0 0 0 1
1 1 0 0
*/

#include <iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class graph
{
    private:
            int v= 10;              // variable storing number of vertices
            int matrix[10][10];     // adjacency matrix of the graph
			int result[10][10];

    public:
            graph();
            void getvertices();			// prototype of function 1 to get vertices of matrix
            void get_edges();			// prototype of function 2 to get edges and filling them in adjacency matrix
            void display();				// protptype of function 3 to display the matrix
            void power();				// prototype of function 4 to calculte power of matrix
            int path(int, int, int);	// prototype of function 5 to compute number of paths between source and destination of given length 
};

//main 
int main(){

    graph g;
	int edges, length, source, destination;
	char choice1= 'y', choice2= 'y';
    g.getvertices();
    
	do{
		
		log("\nEnter the number of edges present in the graph: ");
    	read(edges);

		for (int i= 0; i< edges; i++){
			log("Enter edge" << i + 1 << ": ");
			g.get_edges();
		}

		g.display();

		do{

			log("\nEnter source and destination: ");
			read(source);
			read(destination);
		
			log("\nEnter the length of the path: ");
			read(length);
			
			log("\nNumber of paths:\n" << g.path(source, destination, length));
			log("\nWant to compute with new source, destination and path length? ");
			read(choice1);
		
		}while(choice1== 'y' || choice1== 'Y');
		
		log("\nWant to compute with new matrix? ");
		read(choice2);

	}while(choice2== 'y'|| choice2== 'Y');

return 0;
 
}

// constructor
graph:: graph(){
    for(int i= 0; i< v; i++){
        for(int j= 0; j< v; j++){
            matrix[i][j] = 0;
			result[i][j] = 0;
        }
    }
}

// function 1 to initiaize matrix
void graph:: getvertices(){

    wrong_v: log("Enter the number of vertices in the graph (not more than 10): ");
    read(v);

    if(v > 10 || v < 0){
        log("\nEnter positive value of v not more than 10.");
        goto wrong_v;
    }
}

// function 2 to get edges and filling them in adjacency matrix
void graph:: get_edges(){
    int edge[2];
    
    for (int i= 0; i< 2; i++){
        again:  read(edge[i]);
        
		if(edge[i] > v){
			log("\n\tError: Edge Overflow!");
			goto again;
		}
		else if(edge[i] < 1){
			log("\n\tError: Enter a natural number!");
		}
    }

    matrix[edge[0] - 1][edge[1] - 1] = 1;
    result[edge[0] - 1][edge[1] - 1] = 1;

}

// function 3 to display the matrix
void graph:: display(){

    log("\nAdjency matrix:\n");
    for(int i= 0; i< v; i++){
        log(std:: endl << "\t\t\t");
        for(int j= 0; j< v; j++){
            log(matrix[i][j] << " ");
            }
        }
    log(std:: endl);
}

// function 4 to calculte power of matrix
void graph:: power(){
	
	int mul[v][v];
	
	for(int i= 0; i< v; i++){
		for(int j= 0; j< v; j++){
			mul[i][j]=0;
		}
	}

	for(int i= 0; i< v; i++){
		for(int j= 0; j< v; j++){
			for(int k= 0; k< v; k++){
				
				mul[i][j] += result[i][k] * matrix[k][j];
			}
		}
	}
	
	for(int i= 0; i< v; i++){
		for(int j= 0; j< v; j++){
			result[i][j]=mul[i][j];
		}
	}

	for(int i= 0; i< v; i++){
		for(int j= 0; j< v; j++){
			log(result[i][j] << " ");
		}
		log(std:: endl);
	}
		log(std:: endl);
}

// function 5 to compute number of paths between source and destination of given length 
int graph:: path(int source, int destination, int length){

	for(int i= 0; i< length-1; i++){
		power();
	}
    log(std:: endl << source << destination);
	
return result[source][destination];
}