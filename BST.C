#include <iostream>
using namespace std;
struct tnode
{
    int data;
    struct tnode *left;
    struct tnode *right;
};
struct tnode *root = NULL;
struct tnode *createnode(int val)
{
    struct tnode *n = (struct tnode *)malloc(sizeof(struct tnode));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void insert()
{
    int val;
    printf("\nEnter value which you want to insert ");
    scanf("%d", &val);
    struct tnode *temp = createnode(val);
    struct tnode *prev = NULL;
    struct tnode *cur = root;
    if (root == NULL)
    {
        root = temp;
        printf("\nNode inserted successfully ");
        return;
    }
    while (cur != NULL)
    {
        if (temp->data < cur->data)
        {
            prev = cur;
            cur = cur->left;
        }
        else
        {
            prev = cur;
            cur = cur->right;
        }
    }
    if (temp->data < prev->data)
    {
        prev->left = temp;
    }
    else
    {
        prev->right = temp;
    }
    printf("\nNode inserted successfully ");
}
void inorder(struct tnode *temp)
{
    if (temp==NULL){
        return;
    }
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    
}
int main()
{
    insert();
    insert();
    insert();

    inorder(root);
    return 0;
}