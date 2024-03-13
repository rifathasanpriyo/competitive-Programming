#include<iostream>
using namespace std;
int main()
{
       int a,b,c,one,two,three,four;
       cin>>a>>b>>c;
       one=a+b*c;
       two=a*(b+c);
       three=a*b*c;
       four=(a+b)*c;
       int five = a+b+c;
       int ans= max(five,(max(four,(max(three,(max(one,two)))))));
       cout<<ans;
}
