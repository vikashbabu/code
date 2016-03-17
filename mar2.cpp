#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T,n;
    int i,j,l;

    long long k;
    cin>>T;
    while(T--)
    {
        vector<long> a,b;

        cin>>n>>k;
        int x,y;
        long long max,sum;
        for(i=0;i<n;i++)
          {
              cin>>j;
              a.push_back(j);

          }

          for(i=0;i<n;i++)
          {
              cin>>j;
              b.push_back(j);

          }
          x=0;
          max=a[0]*b[0];
          sum=a[0]*b[0];
          for(i=1;i<n;i++)
          {
            if((a[i]*b[i])>max)
            {
                x=i;
                max=(a[i]*b[i]);

            }
            sum=sum+(a[i]*b[i]);

          }
          i=x;
          long long tmp=a[i]*b[i];
          if((a[i]*b[i])>0)
          {
              if(a[i]>0)
                 a[i]+=k;
                else
                  a[i]-=k;

          }
          else
          {
              if(a[i]>0)
                 a[i]-=k;
               else
                a[i]+=k;

          }
          sum=sum-tmp;
          tmp=a[i]*b[i];
          sum=sum+tmp;
          cout<<sum<<endl;




    }
    return 0;

}
