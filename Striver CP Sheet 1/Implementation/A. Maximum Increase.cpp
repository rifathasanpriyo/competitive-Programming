
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
        cin>>a[i];
 }
 int count1=1,count2=1;
 for(int i=0;i<n-1;i++)
 {

        if(a[i+1]>a[i])
        {
               count1++;
        }
        else count1=1;

             if(count2<count1)
             {
                    count2=count1;
             }


 }
  cout<<count2;

return 0;
}
