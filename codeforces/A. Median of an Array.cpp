#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--)
       {
              int n;
              cin>>n;
              vector<int>arr(n);
              for(int i=0;i<n;i++)
              {
                     cin>>arr[i];
              }
              sort(arr.begin(),arr.end());
              int mindex=(n+1)/2-1;
              int median=arr[mindex];
              int count1=0;
              for(int i=mindex;i<n;i++)
              {
                     if(arr[i]>median)
                     {
                       break;
                     }
                     count1++;
              }
              cout<<count1<<endl;
       }
}
