#include<iostream>
using namespace std;
class Account{
private:
    int acc_no;
    double balance;
    static double min_balance;
public:
    void getdetails(){
        cout<<"Enter account number and available balance"<<endl;
        cin>>acc_no>>balance;
    }
    void displaydetails(){
        cout<<"Account number"<<acc_no<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    static void displaymin(){
        cout<<"Minimum balance is"<<min_balance<<endl;
    }
    friend void logic();
};
    void logic(Account obj[]){
        for(int i=0;i<5;i++){
        if(obj[i].balance<min_balance){
            min_balance=obj[i].balance;
        }
        }
    }
double Account::min_balance=obj[0].balance;
int main(){
    Account obj[5];
    logic(Account obj[]);
    //read data for each account
    int i;
    for(i=0;i<5;i++){
            cout<<"Enter data for account "<<i+1<<endl;
            obj[i].getdetails();
    }
    //display data for each account
    for(int i=0;i<5;i++){
        cout<<"Data for account"<<i+1<<endl;
            obj[i].displaydetails();

            }
            //display minimum balance
            Account::displaymin();
            return 0;

    }