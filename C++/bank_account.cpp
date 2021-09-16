#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Account                       //class 
{
    private:
            float current = 1000;   //float variable storing the current balance in the amount
    public:
            void deposit(float);    //prototype of function_1 to deposit the amount
            void withdraw(float);   //prototype of function_1 to deposit the amount
            void show_balance();    //prototype of function_3 to see the current balance
};

void Account:: deposit(float a)     //function_1 to deposit the amount
{
    current += a;
    log("\nRs. " << a << " credited!");
}

void Account:: withdraw(float a)    //function_1 to deposit the amount
{
    current -= a;
    log("\nRs. " << a << " debited!");
}

void Account::show_balance()        //function_3 to see the current balance
{
    log("\nYou current balance is: " << current);
}

int main()                          //main function
{
    Account acc;                    //object of class 'Account'
    float amount;                   //integer variable to store the amount
    int choice;
    char choice1 = 'y';

    do
    {
        //menu
        again : log("1. Deposit\t2. Withdraw\t3. Check Balance");
        log("\nEnter your choice: ");   
        read(choice);               //reading choice from the user

        switch(choice)
            {
                case 1  :   log("\nEnter the amount you want to deposit: ");    //deposit amount
                            read(amount);
                            acc.deposit(amount);                                //calling funtion_1
                            break;
                        
                case 2  :   log("\nEnter the ammount you want to withdraw: ");
                            read(amount);                                       //calling function_2
                            acc.withdraw(amount);
                            break;

                case 3  :   acc.show_balance();                                 //calling function_3
                            break;

                default :   log("\nWrong Choice!!!");
                            goto again;
            }

        log("\nDo you want to continue? ");
        read(choice1);

    }while (choice1 == 'Y' || choice1 == 'y');
    
return 0;
}                                                                               //end of main function