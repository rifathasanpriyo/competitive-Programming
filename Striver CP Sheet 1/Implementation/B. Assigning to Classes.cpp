#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
         ll n;
        cin>>n;
        ll a[2*n+1];
        for(ll i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+(2*n));
        if((2*n%2)==0)
        {
              int sum=abs(a[n-1]-a[n]);
               cout<<sum<<endl;
        }

   }

return 0;
}
