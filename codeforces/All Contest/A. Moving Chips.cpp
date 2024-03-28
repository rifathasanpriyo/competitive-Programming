#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--)
       {
              int n,k,w,count1=0;
              cin>>n;
              vector<int> v;
              for(int i=0;i<n;i++)
              {
              int x;
              cin>>x;
              v.push_back(x);
              }
              for(int j=0;j<n;j++)
              {
                     if(v[j]==1)
                     {
                         k=j;
                         break;
                     }
              }
              for(int y=n-1;y>=0;y--)
              {
                     if(v[y]==1)
                     {
                            w=y;
                            break;
                     }
              }
              for(int q=k;q<=w;q++)
              {
                     if(v[q]==0)
                     {
                      count1++;
                     }
              }
              cout<<count1<<endl;
            v.clear();
       }
}
