#include<iostream>
using namespace std;
int main()
{
       long long int n,k,m;
       cin>>n>>k;
       if(n%2==0)
       {
              m=n/2;
       }
       else
       {
              m=(n+1)/2;
       }
       if(k<=m)
       {
              cout<<(k*2)-1;
       }
       else
       {
              cout<<(k-m)*2;
       }

}
