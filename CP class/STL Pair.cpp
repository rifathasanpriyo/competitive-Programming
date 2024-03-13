#include<bits/stdc++.h>
using namespace std;
int main()
{
       pair<int,string> p;
       p=make_pair(2,"abc");
       cout<<p.first<<" "<<p.second<<endl;
       //array_with_pair
       pair<int,int> arr[3];
       for(int i=0;i<3;i++)
       {
         cin>>arr[i].first>>arr[i].second;
       }
       for(int i=0;i<3;i++)
       {
         cout<<arr[i].first<<" "<<arr[i].second;
       }

}
