#include<stdio.h>
int fibo(int n)
{
    if(n<=1)
         return n;
     else
        return(fibo(n-1)+fibo(n-2));

}
int main()
{
int n,i,j,k;
printf("\n how many terms do u want :");
scanf("%d",&k);
for(;k>=0;k--)
printf("%d ",fibo(k));
return 0;

}
