#include<bits/stdc++.h>
using namespace std;
long long N=10e6+10;

void sieve(int arr[])
{

     for(int i=2;i<=N;i++)
     {
            if(arr[i]==0)
            {
                   for(int j=2;i*j<=N;j++)
                   {
                          arr[i*j]=1;
                   }
            }
     }
}
int main()
{
  int arr[N]={0};
     int n;
    cin>>n;
  sieve(arr);
    for(int i=0;i<n;i++)
    {
           long long int x,sqr;
           cin>>x;
           sqr=sqrt(x);

           if(x==1)cout<<"NO"<<endl;
           else if(sqr*sqr==x && arr[sqr]==0)
           {
                  cout<<"YES"<<endl;
           }
           else{
              cout<<"NO"<<endl;
           }
    }
}

