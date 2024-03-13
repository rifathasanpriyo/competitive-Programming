#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test,i,j,group,x,count=0,k;
       cin>>test;
       vector<int>v;

       for(i=0;i<test;i++)
       {
            cin >> x;
            v.push_back(x) ;
       }

       sort(v.begin(), v.end(), greater<int>());
       for(i=0;i<v.size();i++)//0 0 0 0 0 0 0 0=5
       {
              if(v[i]==4)
              {
                     count++;
                     v[i]=0;
                     k++;
              }
              else{
                     for(j=i+1;j<v.size();j++)
                     {
                            if(v[i]+v[j]==4)
                            {
                                   count++;
                                   v[j]=0;
                                   v[i]=0;
                                   k++;
                                   break;
                            }
                     }
              }
       }
      for(i=0;i<v.size();i++)
      {
             if(v[i]>0)
             {
                    count++;
             }
      }
      cout<<count<<endl;

}
