
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h=0,count1=0,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {

           if(n>=h)
           {
               h=h+i;
               n=n-h;
               if(n>=0)
               count1++;
           }
           else
              break;
    }
    if(count1==0)
    {
       cout<<count1+1<<endl;
    }
    else
    cout<<count1<<endl;

return 0;
}
