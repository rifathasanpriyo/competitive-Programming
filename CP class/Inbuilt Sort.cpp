#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,string>p1,pair<int,string>p2)
{
    if(p1.first!=p2.first)
    {
           if(p1.first<p2.first) return false;
           return true;
    }
    else{
       if(p1.second>p2.second) return false;
       return true;

    }


}
int main()
{
     int n;
     cin>>n;
     vector<pair<int,string>>v(n);
     for(int i=0;i<n;i++)
     {
            cin>>v[i].second>>v[i].first;
     }
     sort(v.begin(),v.end(),cmp);
     for(int i=0;i<n;i++)
     {
         cout<<v[i].second<<" "<<v[i].first<<endl;


     }


}
