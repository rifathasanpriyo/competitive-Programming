#include<iostream>
using namespace std;
int main()
{
       string s;
       cin>>s;
       int i,count=0;
       for(i=0;i<s.size();i++)
       {
              if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
              {
                     count=1;
              }
       }
       if(count==1)
       {
              cout<<"YES";
       }
       else{
              cout<<"NO";
       }
}

