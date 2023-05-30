#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode (int val)
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

int main()
{
    struct node *root=createnode(2);
    struct node *p=createnode(3);
    struct node *q=createnode(5);
    struct node *r=createnode(7);
    struct node *s=createnode(8);
    struct node *r1=createnode(6);
    struct node *s1=createnode(4);
    root->left=p;
    root->right=q;
    p->left=r;
    p->right=r1;
    q->left=s;
    q->right=s1;
  
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}