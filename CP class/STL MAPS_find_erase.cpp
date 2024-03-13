#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
       cout<<"Map size "<<m.size()<<endl;
       for(auto &pr : m)
    {
           cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string>m;
    m[1] ="abc";
    m[5]="bca";
    m[3]="cab";
    m.insert({2,"bac"});
    auto it=m.find(3);
    if (it != m.end()) {
        m.erase(it);
        cout << "Element erased: " << it->first << " " << it->second << endl;
    }
    print(m);
}
