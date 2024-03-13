#include<iostream>
using namespace std;
int main()
{
     int a,b,le,bo,i,count=1;
       cin>>a>>b;
       bo=b*2;
       le=a*3;



           for(i=1;le<bo;i++)
       {
          le=le*3;
          bo=bo*2;
          count++;
       }
       if(le==bo)
       {
              count++;
       }
       cout<<count;


}
