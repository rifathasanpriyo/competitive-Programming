
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
       int n,count1=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++)
       {
              if(s[i]=='1')
              {
                 count1++;
              }
       }
       if(count1==0)
       {
             cout<<"YES"<<endl;
       }
      else if(count1>=4 && count1%2==0)
       {
              cout<<"YES"<<endl;
       }
       else if(count1==2)
       {
         int fi = s.find('1');
    int si = s.rfind('1');
    if (si == (fi + 1))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
       }
       else
       {
              cout<<"NO"<<endl;
       }


}

return 0;
}
