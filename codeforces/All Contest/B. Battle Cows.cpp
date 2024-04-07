#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
           int n,k;
           cin>>n>>k;
           int a[n];
           int a2[n];
           for(int i=0;i<n;i++)
           {
                  cin>>a[i];
                  a2[i]=a[i];
           }
           int count1=0;
           k=k-1;
           int z=k;
           for(int i=0;i<k;i++)
           {
                  if(a[i]>a[k])
                  {
                         swap(a[i],a[k]);
                         k=i;
                         break;
                  }
           }
           for(int i=0;i<n;i++)
           {
                  if(i==k)
                  {
                         continue;
                  }
                  else if(i==k-1 || i>k)
                  {
                         if(a[i]<=a[k])
                         {
                                count1++;
                         }
                         else
                         {
                                break;
                         }
                  }
                  else{
                     if(a[i]>=a[i+1])
                     {
                            swap(a[i],a[i+1]);
                     }
                  }
           }
          swap(a2[0],a2[z]);
          int count2=0;
           for(int i=1;i<n;i++)
           {
                         if(a2[i]<=a2[0])
                         {
                                count2++;
                         }
                         else
                         {
                                break;
                         }
           }

           cout<<max(count1,count2)<<endl;

    }

return 0;
}
