#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
}

void postorder(struct node *root){
    if(root == NULL)
    return;
    
    postorder(root->left);
    postorder(root->right);
    if(root ->left == NULL && root->right == NULL)
    printf("%d ",root->data);
}

int main(){
    struct node *root = createnode(10);
    
    root->left = createnode(20);
    root->right = createnode(30);
    
    root->left->left = createnode(40);
    root->left->right = createnode(50);
    
    printf("Postorder : \n");
    postorder(root);
    return 0;
}