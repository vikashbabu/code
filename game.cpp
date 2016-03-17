#include<iostream>
#include<vector>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    int t,N,J,S;
    cin>>t;
    while(t--)
    {
       char a[100001];
       char b[100001];
        cin>>a>>b;
        int n=strlen(a);
        //cout<<"n= "<<n<<endl;

        int arr1[26]={0};
        int arr2[26]={0};

        int i,z,k;
        N=J=S=0;
        k=0;
        z=0;

        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
                 N++;
             else
             {
               char ch1=a[i];
               char ch2=b[i];
               z++;
               arr1[ch1-97]++;
               arr2[ch2-97]++;
             }
        }

        for(i=0;i<26;i++)
        {
         if(arr1[i]>0 && arr2[i]>0)
         {
             int min1;
             if(arr1[i]<arr2[i])
                min1=arr1[i];
             else
                min1=arr2[i];
             J=J+min1;
             k=k+min1;

         }
        }
        S=z-k;
        cout<<N<<"N"<<J<<"J"<<S<<"S"<<endl;
    }
 return 0;
}
