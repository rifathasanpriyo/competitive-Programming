#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
}

int main()
{
fastIO();

 int a,b;
 cin>>a>>b;
 int sum=0;
 for(int i=1;;i++){
       sum+=a;
       if(sum%10==0 || sum%10==b){
              cout<<i;
              break;
       }
       else{
              continue;
       }
 }


return 0;
}
