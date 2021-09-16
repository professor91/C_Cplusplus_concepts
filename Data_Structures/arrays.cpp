#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void show(int a[], int size){
    
    log("\nArray is: ");
    for(int i= 0; i<size; i++){
        log(a[i] << " ");
    }
}

int main(){
    // static array
    const int size= 10;
    int a[size]={1,6,4,3,8,9,2,10,7};
    
    // traverse - empty element shown as 0
    log("\nTraverse\n");
    for(int i=0; i<size; i++){
        log(a[i] << " ");
    }

    // search
    log("\n\nSearching");
    int elem = 4;
    bool found= false;
    for(int i=0; i<size; i++){
        if(a[i] == elem){
            log("\nElement " << elem << " found at index: " << i);
            found= true;
            break;
        }
    }
    if(!found){
    log("\nElement not found");
    }

    // insert
    log("\n\nInserting");
    elem= 5;
    int index= 5;
    for(int i=size-1; i>index; i--){
        a[i]= a[i-1];
    }
    a[index] = elem;
    show(a,size);

    // delete
    log("\n\nDeleting");
    elem = 5;
    int elem_at;
    for(int i=0; i<size; i++){
        if(a[i] == elem){
            elem_at = i;
        }
    }
    for(int i=elem_at; i<size-1; i++){
        a[i] = a[i+1];
    }
    show(a,size);


    
    
    
    // dynamic array allocation
    // int *a;


    return 0;
}