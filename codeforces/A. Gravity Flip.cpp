#include<iostream>
using namespace std;
int main()
{
       int n,i,j,valu;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       {
              cin>>a[i];
       }
       for(i=n-1;i>=0;i--)//3 2 1 2

       {
             for(j=i-1;j>=0;j--)
             {
                    if(a[i]<a[j])
                    {
                        valu=a[j]-a[i] ;
                        a[i]=a[i]+valu;
                        a[j]=a[j]-valu;
                    }
             }
       }
       for(i=0;i<n;i++)
       {
              cout<<a[i];
              if(i<n-1)
              {
                     cout<<" ";
              }
       }
}
