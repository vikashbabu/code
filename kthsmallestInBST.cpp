#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    node *left,*right;
};
int kth_smallest(node *root,int k)
{
    static int counter=1;
    if(root!=NULL)
    {
     kth_smallest(root->left,k);
     if(counter==k)
         return (root->data);
      else
        counter++;
      kth_smallest(root->right,k);

    }
}
node *allocateNode(int data)
{
    node *tmp=(node *)malloc(sizeof(node));
    tmp->data=data;
    tmp->left=tmp->right=NULL;

}

int main()
{
node *root=allocateNode(30);
root->left=allocateNode(20);
root->right=allocateNode(40);
root->left->left=allocateNode(16);
root->left->right=allocateNode(22);
root->right->left=allocateNode(32);
root->right->right=allocateNode(49);
printf("%d ",kth_smallest(root,3));

return 0;
}
