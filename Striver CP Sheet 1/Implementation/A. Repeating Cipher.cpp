#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int n,m=0,sum=1,count2=2;
   cin>>n;
   string s2;
   for(int i=1;i<=n;i++)
   {
          char ch;
          cin>>ch;

          if(sum==i)
          {
                 cout<<ch;
                 sum=sum+count2++;
          }
   }


return 0;
}
