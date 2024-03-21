#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int count1=1,maxi=0;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
             if(a[i]<=a[i+1])
             {
                    count1++;
             }
             else
             {
                    count1=1;
             }
             if(count1>maxi)
             {
                    maxi=count1;
             }
        }
        cout<<maxi<<endl;
    }
}
