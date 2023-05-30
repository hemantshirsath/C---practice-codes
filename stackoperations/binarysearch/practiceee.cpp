#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
}
node *head=NULL;
void insertatlast(int val){
    if(head==NULL){
        node *n=new node(val);
        head=n;
    }
    else{
        node *n=new node(val);
        node *ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=n;
    }
}
void display(){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    cout<<"hello world";
    return 0;
}