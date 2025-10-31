#include<iostream>
using namespace std;
//saving account class
class SavingAccount{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    SavingAccount(string name , int accNumber,double initialBalance, double rate){
       accountHolderName = name;
       accountNumber = accNumber;
       balance = initialBalance;
       interestRate = rate;
    }

    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout<<"Deposited:$"<<amount<<endl;
        }
    }

     void withdraw(double amount){
        if(amount > 0 && amount<=balance){
            balance -= amount;
            cout<<"Withdraw:$"<<amount<<endl;
        }else{
            cout<<"Insufficient balance !"<<endl;
        }
    }

    void applyInterest(){
        double interest = balance * interestRate/100;
        balance += interest;
        cout<<"Interest Applied : $"<<interest<<endl;
    }

    void display(){
        cout<<"\n[saving Account]"<<endl;
        cout<<"account holder :"<<accountHolderName<<endl;
        cout<<"account number :"<<accountNumber<<endl;
        cout<<"balance :"<<balance<<endl;
        cout<<"interest rate :"<<interestRate<<endl;

    }

};

//checking account class
class CheckingAccount{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

    public:
    CheckingAccount(string name,int accNumber, double initialBalance , double fee){
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

     void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout<<"Deposited:$"<<amount<<endl;
        }
    }

     void withdraw(double amount){
        double total = amount + transactionFee;
        if(total <= balance){
            balance -= total;
            cout<<"Withdraw:$"<<amount<<endl;
        }else{
            cout<<"Insufficient balance for withdrawal + fee !"<<endl;
        }
    }

    void display(){
        cout<<"\n[saving Account]"<<endl;
        cout<<"account holder :"<<accountHolderName<<endl;
        cout<<"account number :"<<accountNumber<<endl;
        cout<<"balance :"<<balance<<endl;
        cout<<"transaction fee: "<<transactionFee<<endl;

    }

};

//main Funcyion
int main(){
    cout<<"Name : Shruti Suraj Salunkhe "<<endl;
    cout<<"Roll no. : 76 "<<endl;

    SavingAccount saving("alice",1001,5000.0,3.0);
    CheckingAccount checking("bob",1002,3000.0,20.0);

    //operation on Saving account
    saving.display();
    saving.deposit(1000);
    saving.withdraw(2000);
    saving.applyInterest();
    saving.display();
    
    //operation on checking account
    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
}