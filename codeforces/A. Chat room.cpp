#include<iostream>
#include<string>
using namespace std;
int main()
{
       string s;
       cin>>s;
       int n=s.size(),i,j,k,l,m,count=0;
       for(i=0;i<n;i++)//hlelo

       {
           if(s[i]=='h'&&count==0)
           {
              count=1;
           }
          else if(count==1 && s[i]=='e')
           {
                  count=2;
           }
           else if(count==2 && s[i]=='l')
           {
                  count=3;
           }
           else if(count==3 && s[i]=='l')
           {
                  count=4;
           }
          else if(count==4 && s[i]=='o')
           {
                  count=5;
                  break;
           }

       }
       if(count==5)
       {
              cout<<"YES";
       }
       else
       {
              cout<<"NO";
       }

}
