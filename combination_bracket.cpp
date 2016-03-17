#include<iostream>
using namespace std;
void print_bracket(int pos,int n,int open,int close)
{
  static char a[100];

  if(close==n)
  {
      a[pos]=NULL;
      printf("%s\n",a);
      return;
  }
   if(open>close)
   {
       a[pos]='}';
       print_bracket(pos+1,n,open,close+1);
   }
   if(open<n)
   {
       a[pos]='{';
       print_bracket(pos+1,n,open+1,close);
   }

}
int main()
{
    int n=2;
    print_bracket(0,3,0,0);
    return 0;

}
