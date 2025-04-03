// Bank Management Project
// Main issues- does not save data so a new account needs to be made each time
// - does not have a real user interface. Uses Terminal
// Possible Improvements - Create a proper UI
//-improve withdraw funciton to not allow users to withdraw more than they have in their account
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

//Bank class stores information and holds data 
class bank
{
    char name[100];
    char address[100];
    char acc_type;
    double balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void Display_account();
};

// Function definitions from the bank class.
void bank::open_account(){
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name,100);
    cout << "Enter your address: ";
    cin.ignore();
    cin.getline(address,100);
    cout << "What type of account do you want to open: Savings (s) or checking (c) ";
    cin >> acc_type;
    cout << "Enter the amount you want to deposit: ";
    cin >> balance;
    cout << "Your account has been created" << endl;
}
void bank::deposit_money(){
    int dep;
    cout <<"Enter how much you deposit: ";
    cin >> dep;
    balance+= dep;
    cout << "Total amount you deposited: \t " << balance << endl;
}
void bank::Display_account(){
    cout<<"Your name: \t" << name << endl ;
    cout << "Your address: \t" << address << endl;
    cout << "Type of account: \t"<< acc_type << endl;
    cout << "Total Balance: \t" << balance <<endl;
}
void bank::withdraw_money(){
    double amount;
    cout << "Enter the amount you would like to withdraw: ";
    cin >> amount;
    balance= balance - amount;
    cout << "New Balance: \t" << balance << endl;
}


int main(){
    int option;
    bank obj;
    do{
    // These lines are output so the user can see options
    cout << "1) Open account " << endl;
    cout << "2) Deposit money" << endl;
    cout << "3) Withdraw money" << endl;
    cout << "4) Display account" << endl;
    cout << "5) Exit"<< endl;
    cout<<"Enter the number for the option you would like: ";
    cin >> option;
    //Swith so I can use cases for the users response
    switch(option){
        case 1:
        obj.open_account();
        break;
        case 2:
        obj.deposit_money();
        break;
        case 3:
        obj.withdraw_money();
        break;
        case 4:
        obj.Display_account();
        break;
        case 5: if(option ==5){
            exit(1);
        }
        default: cout << "This is not an option. Please try again " << endl;
    }
    cout << "Do you want to select another option press: Y" << endl;
    cout << "If you want to exit press N: "<< endl;
    option=getch();
    if(option=='n' || option=='N'){
        exit(0);
    }
    }while(option=='y'|| option=='Y');




    getch();
    return 0;
}