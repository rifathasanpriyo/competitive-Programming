#include<bits/stdc++.h>
using namespace std;
long long N=1e6+10;
int n;
long long tree[N];

bool isSufficient(int h)
{
       int wood=0;
        for(int i=0;i<n;i++)
        {
               if(tree[i]>=h)
               {
                  wood=(tree[i]-h)+wood;
               }
        }
        return wood>=m;
}
int main()
{
 int n;
 cin>>n>>m;
 for(int n;i<n;i++)
 {
        cin>>tree[i];
 }
 long long lo=0,hi=1e9;
 while(hi-lo>1)
 {
        int mid=(hi+lo)/2;
        if(isSufficient(mid))
        {
               lo=mid;
        }
        else{
              hi=mid-1;
        }
 }
 if(isSufficient(hi))
 {
        cout<<hi;
 }
 else{
       cout<<lo;
 }

return 0;
}
