#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
node *head = NULL;
node *tail=NULL;
void insertathead(int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        n->next = head;
        head = n;
        tail=head;
    }
    else
    {
        n->next = head;
        head->prev = n;
        head = n;
        
    }
}
void print()
{
    if (head == NULL)
    {
        cout << "Linked list is empty " << endl;
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
}
void insertattail(int data){
    if(head==NULL){
        insertathead(data);
        return;
    }
    node *n=new node(data);
    n->prev=tail;
    tail->next=n;
    tail=n;
}
void deleteathead(){
    if(head==NULL){
        cout<<"Linked list is empty "<<endl;
        return;
    }
    node *temp=head;
    head=head->next;
    head->prev=NULL;

}
void deleteattail(){
    if(head==NULL){
        cout<<"Linked list is empty "<<endl;
        return;
    }
    node *temp=head;
    node *prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    tail=prev;
    free(temp);
}
void insertatposition(int data,int pos){
    if(pos==1){
        insertathead(data);
        return;
    }
    int i=1;
    node *temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    if(temp==NULL){
        cout<<"Invalid position "<<endl;
        return;
    }
    node *n=new node(data);
    n->next=temp->next;
    n->prev=temp;
    temp->next=n;
    if(n->next==NULL){
        tail=n;
    }
}
void deleteatposition(int pos){
    int i=1;
    node *temp=head;
    node *prev=NULL;
    while(i<pos){
        i++;
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"\nInvalid position "<<endl;
        return;
    }
    prev->next=temp->next;
    temp->next->prev=prev;
    free(temp);

}
int main()
{
    insertathead(2);
    insertathead(4);
    insertattail(6);
    insertattail(8);
    // deleteathead();
    // deleteattail();
    insertatposition(55,6);
    // deleteatposition(3);
    insertattail(7);
    insertattail(8);
    insertattail(9);
    print();
    deleteatposition(6);
    cout<<endl;
    print();
    cout<<"\nTail "<<tail->data<<endl;
    return 0;
}