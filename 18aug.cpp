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
void insertatlast(int data){
    if(head==NULL){
        node *n=new node(data);
        head=n;
        return;
    }
    else{
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node *n=new node(data);
    temp->next=n;
    }

}
void print()
{
    if(head==NULL){
        cout<<"\nList is empty "<<endl;
    }
    else{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
}
node *reverse(node *temp){
    if(temp==NULL||temp->next==NULL){
        return temp;
    }
    node *newhead=reverse(temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    return newhead;
}
void middle(){
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
    insertatlast(2);
    insertatlast(4);
    insertatlast(6);
    insertatlast(8);
    // insertatlast(10);
 print();
 cout<<"Middle element is ";
 middle();
  
    return 0;
}