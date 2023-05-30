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
    if(head==NULL){
        cout<<"Linked list is empty "<<endl;
    }
    else{
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    }
}
void insertattail(int data){
    if(head==NULL){
        node *n=new node(data);
        head=n;
        return;
    }
    else{
        node *n=new node(data);
        node *ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=n;
    }
}
node *reverse(node *ptr,int k){
    if(head==NULL){
        return NULL;
    }
    int count=0;
    node *prev=NULL;
    node *cur=head;
    node *next=NULL;
    while(cur!=NULL&&count<k){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        count++;
    }
    if(next!=NULL){
        head->next=reverse(next,k);
    }
    return prev;
}
int main()
{
    insertattail(1);
    insertattail(2);
    insertattail(3);
    insertattail(4);
    insertattail(5);
    head=reverse(head,2);
    display();
    return 0;
}