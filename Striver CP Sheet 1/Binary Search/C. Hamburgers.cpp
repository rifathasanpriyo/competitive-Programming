#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1;
   cin>>s1;
   int count1=0,count2=0,count3=0;
   for(int i=0;i<s1.size();i++)
   {
          if(s1[i]=='B')
          {
                 count1++;
          }
          else if(s1[i]=='S')
          {
                 count2++;
          }
          else if(s1[i]=='C')
          {
                 count3++;
          }
   }
   int b,s,c;
   cin>>b>>s>>c;
   int pb,ps,pc;
   long long taka;
   cin>>pb>>ps>>pc>>taka;
   long long lo=0,hi=1e15;
    long long  ans;

   while(hi>=lo)
   {
       long long mid=(hi+lo)/2;
       long long int zero=0;
       long long x=max(zero,(count1*mid-b));
       long long y=max(zero,(count2*mid-s));
       long long z=max(zero,(count3*mid-c));
       long long cost=(pb*x+ps*y+pc*z);
       if(cost>taka)
       {
              hi=mid-1;
       }
       else
       {
             ans=mid;
              lo=mid+1;
       }

   }
   cout<<ans<<endl;

return 0;
}
