#include<iostream>
using namespace std;
int main()
{
      int n,i,j;
      cin>>n;
      int a[n],a2[n];
      for(i=0;i<n;i++)
      {
             cin>>a[i];
      }
      for(j=0;j<=n;j++)//2 3 4 1
      {
         for(i=0;i<n;i++)
         {
               if(j==a[i])
               {
                      cout<<i+1<<" ";
               }
         }
      }

}
