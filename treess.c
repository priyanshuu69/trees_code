#include<stdio.h>
#include<stdlib.h>
struct node* create(void);
void preorder (struct node* x);
void inorder(struct node* x);
void postorder(struct node* x);
struct node
{
int data;
struct node *prev,*next;
};

int main()
{
struct node* root;
root=NULL;
root=create();
printf("preorder is :");
preorder(root);
/*printf("inorder is :  ");
inorder(root); 
printf("podtorder is :");
postorder(root);*/
}

struct node* create()
{
int x;
struct node *nn;
nn=(struct node*) malloc(sizeof(struct node));
printf("enter the data");
scanf("%d ",&x);
if(x==-1)
{
 return NULL;
}
nn->data=x;
printf("enter the left child of the node %d ",x);
nn->prev=create();
printf("enter the right child of the node %d ",x);
nn->next=create();
return nn;
}

void preorder(struct node* x)
{
if (x == 0){
    return ;
}
printf("%d",x->data);
preorder(x->prev);
preorder(x->next);
}

/*void inorder(struct node* x)
{
if (x == 0){
    return ;
}
inorder(x->prev);
printf("%d",x->data);
inorder(x->next);
}

void postorder(struct node* x)
{
if (x == 0){
    return ;
}
postorder(x->prev);
postorder(x->next);
printf("%d",x->data);
} */

