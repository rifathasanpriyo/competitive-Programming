#include<bits/stdc++.h>
using namespace std;
int main()
{
       map<int,multiset<string>>m;
       int test;
       cin>>test;
       while(test--)
       {
              string name;
              int mark;
              cin>>name>>mark;
              m[mark].insert(name);

       }
       auto it=--m.end();
       /*while(true)
       {
              auto &student_name= (*it).second;
              auto number=(*it).first;
              for(auto student : student_name)
              {
                     cout<<student<<" "<<number<<endl;
              }
              if(it==m.begin())
              {
                     break;
              }
              it--;
       }*/
       auto &student_name= (*it).second;
       auto number=(*it).first;
       for(auto student:student_name)
       cout<<student<<number;
}
