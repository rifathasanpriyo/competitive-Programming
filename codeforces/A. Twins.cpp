#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,count=0,k=-1,heda=0,i,count2=0;
    cin>>n;
    int valu,a[n];

    for(i=0; i<n; i++) //3,3
    {
        cin>>a[i] ;
        sum=sum+a[i];
    }


    int dev=sum/2;
    i=n-1;
    sort(a,a+n);
    while(count<=dev)

    {

        count=count+a[i];
        i--;
        heda++;
    }
    cout<<heda;
}
