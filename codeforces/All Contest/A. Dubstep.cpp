#include<bits/stdc++.h>
using namespace std;
int main()
{

       string s;
       int count1=0;
       getline(cin,s);
       for(int i=0;i<s.size();i++)
       {
              if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
              {
                 s[i]='+';
                 s[i+1]='+';
                 s[i+2]=' ';
              }
       }
       for(int i=0;i<s.size();i++)
       {
              if(s[i]!='+')
              {
                     cout<<s[i];
              }
       }
}
