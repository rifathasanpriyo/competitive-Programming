#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k,l,m,n,d,count1=0;
   cin>>k>>l>>m>>n>>d;
   for(int i=1;i<=d;i++)
   {
          if(i%k==0)
          {
                 count1++;
          }
          else if(i%l==0)
          {
                 count1++;
          }
           else if(i%m==0)
          {
                 count1++;
          }
           else if(i%n==0)
          {
                 count1++;
          }

   }
   cout<<count1<<endl;

}
