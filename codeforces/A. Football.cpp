#include<iostream>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int i,count=0,j=0,count2=0;
   int n=s.size();
   for(i=0;i<n;i++)
   {
          if(s[i]=='1')
          {
                 count++;
                 count2=0;
          }
          else
          {
                count2++;
                count=0;
          }
          if(count==7 || count2==7)
          {
                 j=1;
          }
   }

   if(j==1)
   {

         cout<<"YES";
   }
   else
   {
          cout<<"NO";
   }

}
