#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
       string s,sl,su,nor;
       getline(cin,s);
       nor=s;
       int i,n,count1=0,count2=0;
       n=s.size();
      transform(s.begin(),s.end(),s.begin(),::tolower);
      sl=s;
      transform(s.begin(),s.end(),s.begin(),::toupper);
      su=s;
      for(i=0;i<n;i++)
      {
                if(sl[i]==nor[i])
                    {
                           count1++;
                    }


      }
      count2=n-count1;

       if(count1>count2 || count1==count2)
      {
             cout<<sl;
      }
      else if(count2>count1)
      {
             cout<<su;
      }
}


