#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int T,i,j,k,flag;
cin>>T;
while(T--)
{
 char A[1001],B[1001];
 int a[26]={0};
int b[26]={0};

  cin>>A>>B;
  int l1=strlen(A);
  int l2=strlen(B);
  for(i=0;i<l1;i++)
    a[A[i]-97]++;
    for(i=0;i<l2;i++)
    b[B[i]-97]++;
    flag=0;
    for(i=0;i<26;i++)
      {
        if(a[i]>0 && b[i]>0)
          {
           flag=1;
           break;
          }
    }
    if(flag==1)
      cout<<"Yes"<<endl;
       else
       cout<<"No"<<endl;

 }
 return 0;
 }



