#include<iostream>
using namespace std;
int main()
{
 int i,k,n,w,sum=0,gun;
 cin>>k>>n>>w;
 for(i=1;i<=w;i++)
 {
    sum=sum+i;
 }
 gun=k*sum;
 if(n<gun)
 {
        cout<<gun-n;
 }
 else{
       cout<<"0";
 }


}
