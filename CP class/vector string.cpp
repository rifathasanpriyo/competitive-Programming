#include<bits/stdc++.h>
using namespace std;
print_vector(vector<string> v)
{
       for(int i=0;i<v.size();i++)
       {
              cout<<v[i]<<"\t";
       }
       cout<<endl;
}
int main()
{
    vector<string> v;
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
           string x;
           cin>>x;
           v.push_back(x);
    }
    print_vector(v);
    v.pop_back();
    print_vector(v);
}

