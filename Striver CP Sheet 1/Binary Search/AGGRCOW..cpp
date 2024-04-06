#include<bits/stdc++.h>
using namespace std;
int N=1e5+10;

int c,n;
int v[N];
bool predicted(int distance)
{
       int lastPos=-1;
       int cow_copy=c;
       for(int i=0;i<n;i++)
       {
              if(v[i]-lastPos>=distance || lastPos==-1)
              {
                     cow_copy--;
                     lastPos=v[i];
              }
       }
       return cow_copy==0;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {

          cin>>n>>c;
          for(int i=0;i<n;i++)
          {
                 cin>>v[i];
          }
          sort(v,v+n);
          int lo=0,hi=1e9,mid;
          while(hi-lo>1)
          {
                 mid=(hi+lo)/2;
                 if(predicted(mid))
                 {
                        lo=mid;
                 }
                 else
                     hi=mid-1;
          }
          if(predicted(hi))
          {
                 cout<<hi<<endl;
          }
          else
              cout<<lo<<endl;
   }


return 0;
}
