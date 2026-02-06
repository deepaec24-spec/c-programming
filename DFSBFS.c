#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int data)
{
    if (!root)
    {
        struct node *n = malloc(sizeof(struct node));
        n->data = data;
        n->left = n->right = NULL;
        return n;
    }
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}


    
    int findDepth(struct node *root, int key, int depth)
{
    if (root == NULL)
        return -1;

    if (root->data == key)
        return depth;

    if (key < root->data)
        return findDepth(root->left, key, depth + 1);
    else
        return findDepth(root->right, key, depth + 1);
}


int height(struct node* root) {
    if (root == NULL)
        return -1;   // height in terms of edges

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
int main() {
     struct node *root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int i = 0; i < 7; i++)
        root = insert(root, values[i]);

    int key = 60;
    int depth = findDepth(root, key, 0);

    printf("Depth of %d = %d\n", key, depth);
         

    printf("Height of BST = %d\n", height(root));
    return 0;
}