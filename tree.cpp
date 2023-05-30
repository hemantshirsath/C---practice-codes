#include<iostream>
using namespace std;
struct node {
int data;
struct node *left;
struct node *right;
};
struct node *CreateNode(int val )
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
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
void insert(struct node *root,int key)
{
    struct node *prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
           cout<<"Element already exist in BST cant insert";
            return;
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
    struct node *k=CreateNode(key);
    if(key<prev->data)
    {
        prev->left=k;
    }
    else
    {
        prev->right=k;
    }
}
int main()
{
   struct node *root=CreateNode(5);
   struct node *p=CreateNode(3);
   struct node *q=CreateNode(6);
   struct node *a=CreateNode(2);
   struct node *b=CreateNode(4);
   root->left=p;
   root->right=q;
   p->left=a;
   p->right=b;
   insert(root,3);
    inorder(root);
    return 0;
}