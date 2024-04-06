#include<bits/stdc++.h>
using namespace std;
const int  N=1e6+10;
long long int m,n;
long long int tree[N];

bool isSufficient(int h)
{
       long long int wood=0;
        for(int i=0;i<n;i++)
        {
               if(tree[i]>=h)
               {
                  wood=(tree[i]-h)+wood;
               }
        }
        return wood>=m;//58
}
int main()
{

 cin>>n>>m;
 for(int i;i<n;i++)
 {
        cin>>tree[i];
 }
 long long lo=0,hi=1e9;

 while(hi-lo>1)//2 //20 15 10 17
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
