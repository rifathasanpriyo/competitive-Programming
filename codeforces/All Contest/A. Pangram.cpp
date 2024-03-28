#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,count1=0;
  map<char,int>m;
  cin>>t;
  while(t--)
  {
         char ch;
         cin>>ch;
         char ch2=tolower(ch);
         m[ch2]++;
  }
  for(auto pr:m)
  {
       count1++;
  }
  if(count1<26)
  {
         cout<<"NO"<<endl;
  }
  else
  {
         cout<<"YES"<<endl;
  }
}
