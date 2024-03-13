#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,l,i,x;
       cin>>n>>l;
       vector<int>v;
       for(i=0;i<n;i++)
       {
              cin>>x;
              v.push_back(x);
       }

       sort(v.begin(),v.end());
       int max1=v[1]-v[0];
      for(i=1;i<v.size()-1;i++)
       {
              if(v[i+1]-v[i]>max1)
              {
                     max1=v[i+1]-v[i];
              }

       }
       double max2=max1/2.0;
        double s=v[0];
        double anser=max(s,max2);
        double z=l-v[v.size()-1];
         anser=max(anser,z);
       cout<<fixed<<setprecision(10)<<anser;

}
