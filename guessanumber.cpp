#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand(time(NULL));
  int randnum=rand()%10+1;
  int userinp;
  int count=0;
  do{
cout<<"\nEnter number ";
cin>>userinp;
if(randnum>userinp){
    cout<<"Your guessed number is small ";
}
else if(randnum<userinp)
{
    cout<<"Your guessed number is large ";
}
else {
    cout<<"You guessed it right "<<endl;
    break;
}
count++;
  }while(1);
  cout<<"You guessed it in "<<count<<" attempts "<<endl;
}