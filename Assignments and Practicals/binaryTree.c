#include <stdio.h>
#include <stdlib.h>
 
typedef struct BST 
{
   int data;
   struct BST *lchild, *rchild;
} node;

node *get_node() 
{
    node *temp;
    temp = (node *) malloc(sizeof(node));
    temp -> lchild = NULL;
    temp -> rchild = NULL;
    return temp;
}

void insert(node *root, node *new_node) 
{
    if (new_node -> data < root -> data) 
    {
        if (root -> lchild == NULL)
            root -> lchild = new_node;
        else
            insert(root -> lchild, new_node);
    }
 
    if (new_node -> data > root -> data) 
    {
        if (root -> rchild == NULL)
            root -> rchild = new_node;
        else
            insert(root -> rchild, new_node);
    }
}

void inorder(node *temp) 
{
    if (temp != NULL) 
    {
        inorder(temp -> lchild);
        printf("%d ", temp -> data);
        inorder(temp -> rchild);
    }
}

void preorder(node *temp) 
{
    if (temp != NULL) 
    {
        printf("%d ", temp -> data);
        preorder(temp -> lchild);
        preorder(temp -> rchild);
    }
}
 
void postorder(node *temp) 
{
    if (temp != NULL) 
    {
        postorder(temp -> lchild);
        postorder(temp -> rchild);
        printf("%d ", temp -> data);
    }
}
 
void main() 
{
    int ch;
    node *new_node, *root;
    node *get_node();
    root = NULL;
 
    printf("\n Program For Binary Search Tree ");
    do 
    {
        printf("\n 1.Insert");
        printf("\n 2.Display");
        printf("\n 3.Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
 
        switch (ch) 
        {
            case 1:
                new_node = get_node();
                printf("\n Enter The Element : ");
                scanf("%d", &new_node->data);
 
                if (root == NULL)
                    root = new_node;
                else
                    insert(root, new_node);
            break;
 
            case 2:
                if (root == NULL)
                    printf(" Tree Is Not Created");
                else 
                {
                    printf("\n The In-order display : ");
                    inorder(root);
                    printf("\n The Pre-order display : ");
                    preorder(root);
                    printf("\n The Post-order display : ");
                    postorder(root);
                    printf("\n");
                }
            break;
        }
    } while (ch != 3);
}