#include<iostream>
using namespace std;

int main() {
	int t,r,c,i,j,k;
	cin>>t;
	while(t--)
	{
	    int a[20][20],b[20][20];
	    cin>>r>>c;
	    for(i=0;i<r;i++)
	     {
	         for(j=0;j<c;j++)
	          {
	               cin>>a[i][j];
	               if(a[i][j]==1)
	               {
	                   for(k=0;k<c;k++)
	                    b[i][k]=1;
	                    for(k=0;k<r;k++)
	                     b[k][j]=1;
	               }
	               else
                   {
                       if(b[i][j]!=1)
	                    b[i][j]=0;
                   }

	          }
	     }
	     for(i=0;i<r;i++)
	       {
	           for(j=0;j<c;j++)
	             cout<<b[i][j]<<" ";
	       }



	}
	return 0;
}
