#include<iostream>
#include<fstream>
#include <iomanip>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void vertical_histo();
void horizontal_histo();

int main()
{
    int choice;
    
    log("1. Vertical Histogram\t2. Horizontal Histogram");
    log("\nEnter your choice: ");
    read(choice);

    switch(choice)
    {
        case 1  :   vertical_histo();                               //calling function_2
                    break;
        
        case 2  :   horizontal_histo();
                    break;

        default :   log("\nWrong Choice!!!");
    }
    
return 0;
}

void vertical_histo()                              //function_1 to compute the frequency table
{
    std:: ifstream fin("histo.txt");
    char letter;
    int freq[26];

    for(int i = 0; i < 26; i++)
        freq[i] = 0;                                
    
    if(!fin)
    {
        log("\nCouldn't open the file.");
        exit(100);
    }

    while(fin)
    {
        fin >> letter;
        if(isalpha(letter));
            freq[tolower(letter) - 97]++;           //incrementing the correnponding alphabet in the frequency table
    }
    fin.close();

    for(int i = 0; i < 26; i++)
    {
        log((char)(i + 65) << ", " << (char)(i + 97) << " , " << freq[i] << "  | ");

        for(int j = 0; j < freq[i]; j++)
            log("* ");

        log(std:: endl);
    }
}

void horizontal_histo()                             //function_1 to compute the frequency table
{
    std:: ifstream fin("histo.txt");
    char letter;
    int freq[26];
    
    for(int i = 0; i < 26; i++)
        freq[i] = 0;                                
    
    if(!fin)
    {
        log("\nCouldn't open the file.");
        exit(100);
    }

    while(fin)
    {
        fin >> letter;
        if(isalpha(letter));
            freq[tolower(letter) - 97]++;           //incrementing the correnponding alphabet in the frequency table
    }
    fin.close();
    
    int max = freq[0];
    for (int i = 0; i < 26 ; i++)
        if(freq[i] > max)
            max = freq[i];
    
  
    for (int i = max; i > 0; i--)
    {
        if( i < 10)
            log(" " << i);
        else
            log(i);
        
        log(" | ");
    
        for (int j = 0; j < 26; j++)
        {
            if(freq[j] >= i)
                log(" * ");
            else
                log(" ");
            
        }
        log(std:: endl);
    }
    log("      ");
    
    for (int j = 0; j < 26; j++)
        log(char(65 + j) << " "); 
}

