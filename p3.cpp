#include<iostream>
using namespace std;
struct node {
int data;
struct node *left;
struct node *right;
};
void preorder(struct node *root)
{
    if(root!=NULL)
    {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
    }
}
void postorder(struct node *root )
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct node *search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data>key)
    {
        return search(root->left,key);
    }
    else if(root->data<key)
    {
        return search(root->right,key);
    } else 
    {
        return root;
    }
}
int searchiter(struct node *root,int key)
{
    while(root!=NULL)
    {
        if(root->data==key)
        {
            return 1;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }

    }
    return 0;

}
struct node *Createnode(int val )
{
    struct node *n=(struct node *)malloc(sizeof(struct node *));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main()
{
    struct node *root=Createnode(5);
    struct node *p=Createnode(3);
    struct node *q=Createnode(6);
    struct node *a=Createnode(2);
    struct node *b=Createnode(4);
    root->left=p;
    root->right=q;
    p->left=a;
    p->right=b;
    inorder(root);
    int key;
    cout<<"Enter element to find ";
    cin>>key;
    // struct node *f=search(root,key);
    int k=searchiter(root,key);
    if(k==0)
    {
        cout<<"Element not found ";
    }
    else
    {
        cout<<"Element found ";
    }
    return 0;
}