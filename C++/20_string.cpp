/* Program for performing specified functions on string */

#include<iostream>
#include<cstring>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void show_address(std:: string);                                //prototype of function_1 to show address of the string
void conc_strcat(std:: string, std:: string);                   //prototype of function_2 to concentate two string using strcat function
void compare(std:: string, std:: string);                       //prototype of function_3 to compare two strings
int length(std:: string);                                       //prototype of fucntion_4 to find the length of the string
std:: string convert_ltou(std:: string);                        //prototype of function_5 to convert all lowercase characters to uppercase characters
std:: string convert_utol(std:: string);                        //prototype of function_6 to convert all uppercase characters to lowercase characters
int calc_vowels(std:: string);                                  //prototype of function_7 to calculate total number of vowels in the string
std:: string reverse(std:: string);                             //prototype of function_8 to reverse the string

int main()                                                      //main function
{
    std:: string str1, str2;
    int choice;

    log("Enter the string: ");
    read(str1);                                                 //reading string from the user

    log("1. Show address of each character of the string\n2. Concatenate to strings without using strcat function\n");
    log("3. Concatenate to strings using strcat function\n4. Compare two strings\n");
    log("5. Calculate length of the string using pointers\n6. Convert all lowercase characters to uppercase\n");
    log("7. Convert all uppercase characters to lowercase\n8. Calculate number of vowels\n");
    log("9. Reverse the string\n");
    log("Enter your choice: ");
    read(choice);                                               //reading user's choice

    switch(choice)
    {
        case 1  :   show_address(str1);                                                 //calling function_1
                    break;
                    
        case 2  :   log("\nEnter the second string: ");
                    read(str2);
                    str1 += str2;                                                       //concetenating two strings
                    log("\nConcatenated string is: " << str1);
                    break;
        
        case 3  :   log("\nEnter the second string: ");                                  
                    read(str2);
                    conc_strcat(str1, str2);                                            //calling function_2
                    break;

        case 4  :   log("\nEnter the second string: ");
                    read(str2);
                    compare(str1, str2);                                                //calling function_3
                    break;

        case 5  :   log("\nLength of the string is: " << length(str1));                 //calling function_4
                    break;

        case 6  :   log("\nString converted to uppercase: " << convert_ltou(str1));     //calling function_5
                    break;

        case 7  :   log("\nString converted to lowercaase: " << convert_utol(str1));    //calling funtion_6
                    break;
        
        case 8  :   log("\nNumber of vowels in the string are: " << calc_vowels(str1)); //calling function_7
                    break;

        case 9  :   log("\nReversed string is: " << reverse(str1));                     //calling function_8
                    break;

        default :   log("\nWrong choice!!!");
    }
    
return 0;
}                                                                   //end of main function

void show_address(std:: string str)                                 //function_1 to show address of the string
{
    char* ptr;
    ptr = &str[0];

    log("\nAddress: ");
    while(*ptr != '\0')
    {
        log(&ptr << " ");
        ptr++;
    }
}

void conc_strcat(std:: string str1, std:: string str2)              //function_2 to concentate two string using strcat function
{
	char a1[str1.length() + 1];
	char a2[str2.length() + 1];

	strcpy(a1, str1.c_str());
	strcpy(a2, str2.c_str());

	std:: strcat(a1, a2);

    log("\nConcatenated string is: " << a1);
}

void compare(std:: string str1, std:: string str2)                  //function_3 to compare two strings
{
    if(str1.length() > str2.length())
        log("\nString 1 is greater then string 2");
    else if(str2.length() > str1.length())
        log("\nString 2 is greater then string 1");
    else 
        log("\nStrings are equal");
}

int length(std:: string str)                                        //fucntion_4 to find the length of the string
{
    char* ptr = &str[0];
    int count = 0;

    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
return count;
}

std:: string convert_ltou(std:: string str)                         //function_5 to convert all lowercase characters to uppercase characters
{
    int i = 0;
    while(str[i])
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
return str;
}


std:: string convert_utol(std:: string str)                         //function_6 to convert all uppercase characters to lowercase characters
{
    int i = 0;
    while(str[i])
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        i++;
    }
return str;
}

int calc_vowels(std:: string str)                                   //function_7 to calculate total number of vowels in the string
{
    int i = 0, count = 0;
    while(str[i])
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            count++;
        }
        i++;
    }
return count;
}

std:: string reverse(std:: string str)                              //function_8 to reverse the string
{
    char temp;
    for(int i = 0; i < str.length() / 2; i++)
    {
        temp = str[str.length() - i -1];
        str[str.length() - i -1] = str[i];
        str[i] = temp;
    }
return str;
}