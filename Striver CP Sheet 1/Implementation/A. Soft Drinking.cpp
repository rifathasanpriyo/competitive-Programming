#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,s,p,nl,np;
    cin>>n>>k>>l>>c>>s>>p>>nl>>np;
    int first=k*l;
    int second=first/nl;
    int third =c*s;
    int fourth =p/np;
    int mini1= min(second,third);
    int mini2=min(mini1,fourth);
    int result=mini2/n;
    cout<<result<<endl;

}
