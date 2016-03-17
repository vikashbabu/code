#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    node *next;
};

int find_length(node *root)
 {
     if(root==NULL)
         return 0;
      else return(1+find_length(root->next));

 }
 void  insert(node **st,int x)
 {
     node *tmp;
     tmp=(node *)malloc(sizeof(node));
     tmp->data=x;
     tmp->next=*st;
     *st=tmp;

 }
 int search(node *st,int x)
 {
     if(st==NULL)
         return 0;
      else if(st->data==x)
         return 1;
         else
            return search(st->next,x);

 }
 int main()
 {
     node *st=NULL;
     int x,y,z;
       insert(&st,1);
     insert(&st,1);
     insert(&st,2);
     insert(&st,3);
     insert(&st,4);
     printf("\n length=%d",find_length(st));
     scanf("%d",&x);
     y=search(st,x);
     if(y==1)
        printf("found");
     else
        printf("not found");
     return 0;


 }
