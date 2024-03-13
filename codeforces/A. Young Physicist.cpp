#include<iostream>
using namespace std;
int main()
{
       int n;
       cin>>n;
       int i,x,y,z,sum1=0,sum2=0,sum3=0;
       for(i=1;i<=n;i++)
       {
              cin>>x>>y>>z;
              sum1=sum1+x;
              sum2=sum2+y;
              sum3=sum3+z;
       }
       if(sum1==0&&sum2==0&&sum3==0)
       {
              cout<<"YES";
       }
       else
       {
              cout<<"NO";
       }
}
