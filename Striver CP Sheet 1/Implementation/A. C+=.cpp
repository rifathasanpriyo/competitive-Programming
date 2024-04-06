#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
          int a,b,n,count1=0,count2=0;
          cin>>a>>b>>n;

          while(max(a,b)<=n)
          {
                 if(a<b)
                 {
                     a+=b;
                 }
                 else
                     b+=a;
             count1++;
          }

          cout<<count1<<endl;
   }

return 0;
}
