// AIM: IMPLEMENTATION OF BINARY SEARCH TREE
// NAME: HEMANT PADMAKAR SHIRSATH
// ROLL NO: 51
// SECTION : B
// BATCH : B2
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
void inorder(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
}
struct node *createnode(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
}
void insertnode(){
    int val;
    printf("\nEnter value which you want to insert ");
    scanf("%d",&val);
    struct node *temp=createnode(val);
    struct node *prev=NULL;
    struct node *cur=root;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    while(cur!=NULL)
    {
        if(temp->data<cur->data){
            prev=cur;
            cur=cur->left;
        }
        else{
            prev=cur;
            cur=cur->right;
        }
    }
    if(temp->data<prev->data)
    {
        prev->left=temp;

    }
    else{
        prev->right=temp;
    }
    printf("\nNode inserted successfully ");
    
}
int main()
{
 int ch;
 do{
 printf("\nEnter 1 for inserting node ");
 printf("\nEnter 2 for inorder traversal ");
 printf("\nEnter 3 for exit ");
 printf("\nEnter your choice ");
 scanf("%d",&ch);
 switch(ch)
 {
     case 1:
     insertnode();
     break;
     case 2:
     printf("\nInorder traversal of tree is : ");
     inorder(root);
     break;
 }
 }while(ch!=3);




    
    return 0;
}