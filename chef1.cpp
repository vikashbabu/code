#include<iostream>
using namespace std;
int main()
{
    int t,n,d;
    long int sum;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        sum=0;
        while(d--)
        {
            sum=(n*(n+1))/2;
            n=sum;
        }
        cout<<n<<endl;

    }

}
