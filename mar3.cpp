#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long int D,i,j,k,l;
    cin>>D;
    while(D--)
    {
        char arr[1000001],cp[1000001];
        char x[1000001],y[1000001];
        int a[26]={0};
        int b[26]={0};
        long int l1,l2,l3;
        long int st1,st2;
        cin>>arr;
        l1=strlen(arr);
        st2=l1/2;
        for(i=0;i<st2;i++)
        {
         x[i]=arr[i];
         a[arr[i]-97]++;
         y[i]=arr[st2+i];
         b[y[i]-97]++;

        }
        x[st2]=NULL;
        if(l1%2==1)
        {
             y[st2]=arr[l1-1];
              y[st2+1]=NULL;
        }
        else
         y[st2]=NULL;

         if(l1%2==0)
         {
            if(strcmp(x,y)==0)
                 cout<<"YES"<<endl;
                  else
                  cout<<"NO"<<endl;
         }
         else
         {
           k=0;
           for(i=0;i<26;i++)
           {
             if(a[i]!=b[i])
             {
               j=i;
               k++;

             }

           }

           if(k>1)
             cout<<"NO"<<endl;
            else

            {
                for(i=0;i<l1;i++)
                {
                        if(arr[i]!=(97+j))
                            cp[i]=arr[i];
                 }
                 l1=l1-1;
                 st2=l1/2;
                 for(i=0;i<st2;i++)
                {
                x[i]=arr[i];
                //a[arr[i]-97]++;
                 y[i]=arr[st2+i];
                //b[y[i]-97]++;

                  }
                  x[st2]=NULL;
                  y[l1-1]=NULL;

                  if(strcmp(x,y)==0)
                     cout<<"YES"<<endl;
                  else
                    cout<<"NO"<<endl;


            }  //else



         }




    } //while
 return 0;
}
