#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>m={ {'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string checked(string s)
{
     stack<char>st;
       for(char bracket :s)
       {
              if(m[bracket]<0)
              {
                     st.push(bracket);
              }
              else{
                    if(st.empty())return "NO";
                    else
                    {  char top=st.top();
                          st.pop();
                          if(m[top]+m[bracket]!=0)
                          {
                                 return "NO";
                          }

                    }

              }
       }
       if(st.empty())
       {
              return "YES";
       }
       else{
              return "NO";
       }



}
int main()
{
      int test;
      cin>>test;
      while(test--)
      {
           string s;
           cin>>s;
           cout<<checked(s)<<endl;

      }

}
