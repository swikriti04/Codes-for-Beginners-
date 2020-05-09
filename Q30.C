#include <stdio.h> 
#include <stdlib.h> 
struct node
{
int info;
struct node* left; 
struct node* right;
};
struct node* newNode(int info)
{
struct node* node = (struct node*) malloc(sizeof(struct node));
node->info = info; 
node->left = NULL; 
node->right = NULL; 
return(node);
}
void printPostorder(struct node* node)
{
if (node == NULL) 
return;
printPostorder(node->left); 
printPostorder(node->right); 
printf("%d ", node->info);
}
void printInorder(struct node* node)
{
if (node == NULL) return;
printInorder(node->left); 
printf("%d ", node->info); 
printInorder(node->right);
}
void printPreorder(struct node* node)
{
if (node == NULL) return;
printf("%d ", node->info); 
printPreorder(node->left); 
printPreorder(node->right);
}
int main()
{
struct node *root = newNode(75);
root->left = newNode(126);
root->right = newNode(145); 
root->left->left= newNode(63);
root->left->right= newNode(113); 
printf("\nPre-order transversal of binary tree is \n");
printPreorder(root);
printf("\nIn-order transversal of binary tree is \n");
printInorder(root);
printf("\nPost-order transversal of binary tree is \n");
printPostorder(root);
getchar(); 
return 0;
}
