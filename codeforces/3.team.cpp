#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int  n,k,i,count1=0,j;
    int a[100];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
           cin>>a[i];
           if(i==k)
           {
           j=i;
           }

    }
    for(i=1;i<=n;i++)
    {
          if(a[i]>0)
          {
               if(a[i]>=a[j])
           {
                  count1++;
           }
          }

    }
    cout<<count1;
}


