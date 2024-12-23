// Date: 23/12/2024
// Purpose: A simple banking system that allows users to create an account, deposit money, withdraw money,
// check balance, transfer money, delete account and exit the program.
// status: Incomplete
// Working on: Implementing how to make multiple accounts, transfer money and delete account.

#include<iostream>

using namespace std;

class user
{
    private:
        int account_number;
        string name;
        double account_balance;
        int phone_number;
        int pin_code;

    public:
        void account_creation();
        void deposit_money();
        void withdraw_money();
        void check_balance();
        void Account_details();
        void transfer_money();

};
void user :: account_creation()
{
    cout << "Enter your name: ";
    cin >> name; // set the name of the user
    account_number = account_number + 1; // increment the account number by 1
    cout << "Enter your phone number: ";
    cin >> phone_number; // set the phone number of the user
    cout << "Enter your pin code: "; // set the pin code of the user
    cin >> pin_code;
    if (pin_code < 1000 || pin_code > 9999)
    {
        cout << "Please enter a 4 digit pin code!" << endl; // check if the pin code is a 4 digit number
        return;
    }
    account_balance = 0; // set the initial account balance to zero
}
void user :: deposit_money(){

    int entered_pin;
    double amount;
    cout << "Enter your pin: "; // prompt the user to input their and check if it's matches
    cin >> entered_pin;
    if (entered_pin != pin_code)
    {   
        cout << "Incorrect pin! please enter your right pin" << endl;
        return;
    }
    cout << "Enter the amount to deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "please enter the amount greater than zero!" << endl;
        return;
    }
    

    account_balance = account_balance + amount; // add the new amount to initial ampount
    
}
void user :: withdraw_money()
{
    int entered_pin;
    double amount_to_withdraw;

    cout << "Enter your pin: ";
    cin >> entered_pin;

    if (entered_pin != pin_code)
    {
        cout << "Incorrect pin! please enter your correct pin" << endl;
    }
    
    cout << "Enter the amount to withdraw: ";
    cin >> amount_to_withdraw;
    if (amount_to_withdraw > account_balance)
    {
        cout << "You don't have enough  balance!" << endl;
    } 
    account_balance = account_balance - amount_to_withdraw;
    return;
}
void user :: check_balance()
{
    int entered_acc_no, entered_pin;
    cout << "Enter your account number: ";
    cin >> entered_acc_no;
    if (entered_acc_no != account_number)
    {
        cout << "Incorrect account number! please enter your correct account number." << endl;
        return;
    }
    cout << "Enter you Pin_code: ";
    cin >> entered_pin;
    if (entered_pin != pin_code)
    {
        cout << "Incorrect pin! Please enter your correct pin." << endl;
        return;
    }
    cout << "Account holder name: " << name << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Account balance: $" << account_balance << endl;
    cout << "Phone number: " << phone_number << endl;

    return;
}
 
int main(){
    int user_input = 0;
    user user1;

    while (user_input != -1)
    {
        cout << "*********************************************************" << endl;
        cout << "Input the number based on the action you want to perform " << endl;
        cout << "Create account: 1" << endl;
        cout << "Deposit money: 2" << endl;
        cout << "Withdraw money: 3" << endl;
        cout << "Check balance: 4" << endl;
        cout << "Transfer money: 5 " << endl;
        cout << "Account information 6: " << endl;
        cout << "Delete account: 7" << endl;
        cout << "Exit: -1" << endl;
        cout << "*********************************************************" << endl;
        cin >> user_input;
        switch (user_input)
        {
        case 1:
            user1.account_creation();
            break;
        case 2:
            user1.deposit_money();
            break;
        case 3:
            user1.withdraw_money();
            break;
        case 4:
            user1.check_balance();
            break;
        case 5:
            cout << "function not implemented yet!" << endl;
            break;
        case 6:
            user1.Account_details();
            break;
        case 7:
            cout << "function not implemented yet!" << endl;
            break;
        case -1:
            cout << "Exiting the program!" << endl;
            return 0;
            break;
        
        default:
            cout << "Invalid input! Please enter a valid input." << endl;
            break;
        }
    } 
    return 0;
}
