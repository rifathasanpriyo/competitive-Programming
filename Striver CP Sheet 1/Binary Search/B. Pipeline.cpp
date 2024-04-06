#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
ll sum(ll n)
{
    return (n*(n+1))/2;
}
int main()
{
  cin>>n>>k;
  n=n-1;
  ll s=sum(k-1);
  if(s<n)
  {
         cout<<-1<<endl;
  }
  else
  {
      ll low=0,high=k-1,mid;
   while(high>=low)
  {
     mid=low+(high-low)/2;
    if(s-sum(mid)>=n)
    {
           low=mid+1;
    }
    else{
       high=mid-1;
    }
  }
  cout<<k-1-high;

  }

return 0;
}
