#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int i,j,k;
  int n=s.size();
  for(i=0;i<n;i++)
  {
         for(j=i+1;j<n;j++)
         {
                if(s[i]==s[j])
                {
                       for(k=j;k<n;k++)
                       {
                              s[k]=s[k+1];

                       }
                         n--;
                         j--;
                }

         }
  }

 if(n%2==0)
 {
        cout<<"CHAT WITH HER!";

 }
 else
 {
        cout<<"IGNORE HIM!";
 }
}
