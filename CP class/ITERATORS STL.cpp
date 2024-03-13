#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test;

       cin>>test;
       vector<pair<int,int>> v_p(test);
       for(int i=0;i<test;i++)
       {
              cin>>v_p[i].first>>v_p[i].second;
       }
       vector<pair<int,int>>::iterator it;
       for(it=v_p.begin();it!=v_p.end();it++)
       {
              cout<<(it->first)<<" "<<(it->second)<<endl;
       }
}
