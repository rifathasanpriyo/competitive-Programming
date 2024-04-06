#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n=5,count1=0;
 string s1,s2;
 cin>>s1;

 for(int i=0;i<n;i++)
 {
        cin>>s2;
        if(s2[0]==s1[0]||s2[1]==s1[1])
        {
               count1=1;
        }
 }
 if(count1==1)
 {
        cout<<"YES"<<endl;
 }
 else cout<<"NO"<<endl;

return 0;
}
