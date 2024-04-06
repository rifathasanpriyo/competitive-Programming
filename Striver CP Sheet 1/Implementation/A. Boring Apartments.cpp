#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
        ll x;
        cin>>x;
        ll temp=x;
        vector<int>v;
        while(temp!=0)
        {
           int r=temp%10;
           v.push_back(r);
           temp=temp/10;
        }
        int sum=0;
        if(v[0]==1)
        {
             if(v.size()==1)
                     {
                            sum=sum+1;
                     }
                     else if(v.size()==2)
                     {
                            sum=sum+3;
                     }
                     else if(v.size()==3)
                     {
                            sum=sum+6;
                     }
                     else if(v.size()==4)
                     {
                            sum=sum+10;
                     }
        }
        else
        {
           for(int i=1;i<=v[0];i++)
           {
                  if(i==v[0])
                  {
                     if(v.size()==1)
                     {
                            sum=sum+1;
                     }
                     else if(v.size()==2)
                     {
                            sum=sum+3;
                     }
                     else if(v.size()==3)
                     {
                            sum=sum+6;
                     }
                     else if(v.size()==4)
                     {
                            sum=sum+10;
                     }
                  }
                  else
                  sum=sum+10;
           }
        }
        cout<<sum<<endl;

 }


return 0;
}
