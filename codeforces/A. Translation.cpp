#include<iostream>
#include<string>
using namespace std;
int main()
{
       string t,s;
       cin>>t>>s;
       int n=t.size();
       int n2=s.size(),i,j,count=0;
       for(i=0,j=n2-1;i<n,j>=0;i++,j--)
       {
              if(t[i]==s[j])
              {
                count++;
              }
       }
       if(count==n)
       {
              cout<<"YES";
       }
       else
       {
              cout<<"NO";
       }
}
