#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];
int feb(int n){
if(n==0)
{
       return 0;
}
else if(n==1){
      return 1;
}
if(dp[n]!=-1) return dp[n];
return dp[n]=feb(n-1)+feb(n-2);
}
int main()
{
       memset(dp,-1,sizeof(dp));
       int n;
       cin>>n;
       cout<<feb(n);
}
