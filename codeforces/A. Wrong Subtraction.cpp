#include<iostream>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int i,count=0,j,count2=0;
   int n=s.size();
   for(i=0;i<n;i++)
   {
          if(s[i]=='1')
          {
                 if(s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1')
                 {
                        count=7;

                 }
          }
          if(s[i]='0')
          {
                 if(s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0')
                 {
                        count=7;

                 }
          }
   }
   count2=n-count;
   if(count2<7)
   {
          cout<<"YES";
   }
   else
   {
          cout<<"NO";
   }

}
