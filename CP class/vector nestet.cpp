#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v)
{
       for(int i=0;i<v.size();i++)
       {
              cout<<v[i]<<"\t";
       }
       cout<<endl;
}
int main()
{
       vector<vector<int>>v;
       int i,test,j;
       cin>>test;
       for(i=0;i<test;i++)
       {
              int n;
              cin>>n;
              v.push_back(vector<int>());
              for(j=0;j<n;j++)
              {
                    int x;
                    cin>>x;
                    v[i].push_back(x);
              }

       }
       for(i=0;i<v.size();i++)
       {
          print_vector(v[i]);
       }
}
