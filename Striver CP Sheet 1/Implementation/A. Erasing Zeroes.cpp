
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
       string s;
       cin>>s;
       int count1=0;
       int k=0,z=0;
       for(int i=0;i<s.size();i++)
       {
              if(s[i]=='1')
              {
                  k=i;
                  break;
              }
       }
       for(int i=s.size()-1;i>=0;i--)
       {
              if(s[i]=='1')
              {
                  z=i;
                  break;
              }
       }
       for(int i=k;i<z;i++)
       {
              if(s[i]=='0')
              {
                     count1++;
              }
       }
       cout<<count1<<endl;
}

return 0;
}
