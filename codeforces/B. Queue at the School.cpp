#include<iostream>
using namespace std;
int main()
{
       int n,t,i,temp;
       cin>>n>>t;
       string s;
       cin>>s;
       while(t!=0)
       {
           for(i=0;i<n;i++)
       {
              if(s[i]=='B')
              {
                     if(s[i+1]=='G')
                     {
                            temp=s[i];
                            s[i]=s[i+1];
                            s[i+1]=temp;
                            i++;
                     }
              }
       }
       t--;
       }

       cout<<s;
}
