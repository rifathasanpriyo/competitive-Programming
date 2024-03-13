#include<bits/stdc++.h>
using namespace std;
int main()
{
       int size,i,ma=0,mi=101,mini,max;
       cin>>size;
       int a[size];
       for(i=0;i<size;i++)
       {
           cin>>a[i];
           if(a[i]>ma)
           {
                  ma=a[i];
                  max=i;
           }
           if(a[i]<=mi)
           {
                  mi=a[i];
                  mini=i;
           }

       }
       if(max>mini)
       {
              mini++;
       }
       cout<<max+(size-1)-mini<<endl;
}
