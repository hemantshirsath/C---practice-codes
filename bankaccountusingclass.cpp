#include<iostream>
using namespace std;
class bank {
    public:
    int acc_no,balance;
    void setdata(int an,int b){
        acc_no=an;
        balance=b;
    }
    void display()
    {
        cout<<"Bank account number "<<acc_no<<endl;
        cout<<"Balance :"<<balance;
    }
    void deposit();
    void withdraw();
};
void bank::deposit()
{
    int acc, amount;
    cout<<"Enter account number ";
    cin>>acc;
    if(acc_no==acc)
    {
        cout<<"Enter amount to deposit ";
        cin>>amount;
        balance=balance+amount;
        cout<<amount<<" deposited successfully ";
    }
    else{
        cout<<"Incorrect account number please enter valid account number ";
    }
}
void bank::withdraw()
{
    int amnt,acc;
    cout<<"Enter account number ";
    cin>>acc;
    if(acc_no==acc)
    {
        cout<<"Enter amount to withdraw ";
        cin>>amnt;
        if(amnt>balance)
        {
            cout<<"amount entered by you is excess than your bank balance please enter valid amount\n your account balance is "<<balance;
            return;
        }
        else
        {
            balance=balance-amnt;
            cout<<"Amount remained in account "<<balance;

        }

    }
    else{
        cout<<"Invalid account number ";
    }
}
int main()
{
    int acc,balance;
    cout<<"Enter account number ";
    cin>>acc;
    cout<<"Enter balance ";
    cin>>balance;
    bank b1;
    b1.setdata(acc,balance);
    b1.display();
    int n;
    cout<<"\nEnter 1 to deposit money"<<endl;
    cout<<"Enter 2 to withdraw money "<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        b1.deposit();
        break;
        case 2:
        b1.withdraw();
        break;
        default:
        cout<<"Invalid entry ";
        break;
    }
    
    
    return 0;
}