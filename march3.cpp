#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    long int t,l,D,i,j,k,x,m;
    cin>>D;
    while(D--)
    {
        char arr[1000001],ch,ch1;
        vector<char> a;
        cin>>arr;
        l=strlen(arr);
        for(i=0;i<l;i++)
        {
         a.push_back(arr[i]);
        }
     if(l%2==0)
     {

         x=0;
         t=l/2-1;
     }
     else
     {

        x=1;
        t=l/2;
     }
     j=0;
     for(i=0;i<t;i++)
     {
         if(a[i]!=a[i+(l/2)])
         {
             char ch1=a[i];
             char ch2=a[i+l/2];
             if(i==0)
             {
               if(a[i+l/2]==a[l/2]-1)
                  a.erase(a.begin());
               else
                a.erase(a.begin()+l/2);

             }
         }



     }














    }

}
