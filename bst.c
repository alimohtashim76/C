#include <stdio.h>
#include <math.h>
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {

        postorder(root->right);
        postorder(root->left);
        printf("%d", root->data);
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {

        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
