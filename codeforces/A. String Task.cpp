#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s;
   getline(cin,s) ;
   transform(s.begin(),s.end(),s.begin(),::tolower) ;
   int i,size1,j;
   size1=s.size();
   for(i=0;i<size1;i++)
   {
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
          {
              for(j=i;j<size1;j++)
              {
                     s[j]=s[j+1];

              }
              size1--;
              i--;

          }

   }
   for(i=0;i<size1;i++)
   {
          cout<<"."<<s[i];
   }



}
