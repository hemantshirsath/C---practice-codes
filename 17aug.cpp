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
};
node *head=NULL;
void display(){
    node *ptr=head;
    if(ptr==NULL){
        cout<<"Linked list is empty "<<endl;
    }
    else{
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    }
}
void insertatlast(int data)
{
    node *temp=head;
    if(head==NULL){
        node *n=new node(data);
        head=n;
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node *n=new node(data);
    temp->next=n;
    }
}
void reverse(){
    node *cur=head;
    node *prev=NULL;
    node *temp;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    head=prev;
}
void getmiddle(){
    node *fast=head;
    node *slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"Middle element is "<<slow->data<<endl;
}
int main()
{
    // insertatlast(2);
    // insertatlast(4);
    // insertatlast(6);
    // insertatlast(8);
    // insertatlast(10);
    // insertatlast(12);
    // insertatlast(14);
    display();
    // reverse();
    // cout<<"\nReversed Linked list is "<<endl;
    // display();
    getmiddle();
    return 0;
}