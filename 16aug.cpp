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
void insertathead(int data){
    if(head==NULL){
        node *n=new node(data);
        head=n;
        n->next=head;
    }
    else{
        node *n=new node(data);
        n->next=head;
        head=n;
    }
}
void print(){
    if(head==NULL){
        cout<<"\nLinked list is empty "<<endl;
        return;
    }
    node *temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}
int main()
{
    insertathead(2);
    insertathead(4);
    print();
    return 0;
}