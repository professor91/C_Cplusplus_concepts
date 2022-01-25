#include<stdio.h>
#include<string.h>

struct books
{
    char name[50];
    char author[50];
    int published_year;
};

int main(){
    struct books book1;
    
    strcpy(book1.name, "The Alchemist");
    strcpy(book1.author, "Paulo Cohleo");
    book1.published_year= 2014;

    printf("Name of Book: %s\nAuthor of Book: %s\nPublished Year: %d\n", book1.name, book1.author, book1.published_year);

return 0;
}