#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=3;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
          cin>>v[i];
   }
   sort(v.begin(),v.end());
   int result=(v[1]-v[0])+(v[2]-v[1]);
   cout<<result<<endl;


}
