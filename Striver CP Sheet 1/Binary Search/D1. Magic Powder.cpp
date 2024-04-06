#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
vector<ll>req(1000),have(1000);
bool predicted(int mid)
{
       ll cost=0,z=0;
       for(int i=0;i<n;i++)
       {
            cost+=max(z,(req[i]*mid)-have[i]);
       }
       return cost<=k;
}
int main()
{
     cin>>n>>k;
     for(int i=0;i<n;i++)
     {
            cin>>req[i];
     }
     for(int i=0;i<n;i++)
     {
            cin>>have[i];
     }
     ll low=0,high=2001,mid;
     while(high>=low)
     {
            mid=(high+low)/2;
            if(predicted(mid))
            {
                 low=mid+1;
            }
            else
            {
                   high=mid-1;
            }
     }
     cout<<high<<endl;

return 0;
}
