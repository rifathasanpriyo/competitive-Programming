#include<iostream>
#include<string>
using namespace std;
int main()
{
       int n,count=0;
       cin>>n;
       string s;
      cin>>s;
       int i,j;
       for(i=0;i<n;i++)
       {
              if(s[i]==s[i+1])
              {
                  count++;
              }

       }
       cout<<count;

}
