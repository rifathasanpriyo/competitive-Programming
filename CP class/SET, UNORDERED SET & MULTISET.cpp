//set ar time complixity o(log(n))
//unordered set ar time complixity o(1)
//MULTISET ar time complixity o(log(n))

#include<bits/stdc++.h>
using namespace std;
void print(set<string>s)
{
       for(auto it:s)
       {
              cout<<it<<" ";
       }
       cout<<endl;

}
int main()
{
       int n;
       cin>>n;
       set<string>s;
       for(int i=0;i<n;i++)
       {
              string x;
              cin>>x;
              s.insert(x);
       }
       print(s);
       auto it=s.find("abc");
       if(it!=s.end())
       {
              s.erase(it);
       }
       print(s);

}
