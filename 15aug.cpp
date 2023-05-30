#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *head = NULL;
node *tail = NULL;
void insertathead(int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        n->next = NULL;
        head = n;
        tail = head;
    }
    else
    {
        node *n = new node(data);
        n->next = head;
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
        cout << "\nPrinting linked list " << endl;
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}
void insertattail(int data)
{
    if (head == NULL)
    {
        insertathead(data);
        return;
    }
    else
    {
        node *n = new node(data);
        tail->next = n;
        tail = n;
    }
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
        cout<<"\nInvalid position "<<endl;
        return;
    }
    node *n=new node(data);
   n->next=temp->next;
   temp->next=n;

}
void deleteathead()
{
    if(head==NULL){
        cout<<"Linked List is Empty "<<endl;
        return;
    }
    else{
        node *temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteattail(){
    if(head==NULL){
        cout<<"Linked list is empty "<<endl;
        return;
    }
    else{
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
}
void deleteatposition(int pos){
    if(pos==1){
        deleteathead();
        return;
    }
    int i=1;
    node *temp=head;
    node *ptr=NULL;
    while(i<pos){
        ptr=temp;
        temp=temp->next;
        i++;
    }
    if(temp==NULL){
        cout<<"\nInvalid position "<<endl;
        return;
    }
    ptr->next=temp->next;
    if(ptr->next==NULL){
        tail=ptr;
    }
    free(temp);


}
int main()
{
    // node *head=new node(1);
    insertathead(2);
    insertathead(4);
    insertattail(6);
    insertathead(9);
    insertattail(19);
    insertatposition(55,2);
    insertatposition(999,1);
    deleteathead();
    deleteatposition(7);
    print();
    cout <<endl<< "Tail data is " << tail->data << endl;
    return 0;
}