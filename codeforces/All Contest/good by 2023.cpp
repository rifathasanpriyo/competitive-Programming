#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
       while(a!=0)
       {
          int re=b%a;
          b=a;
          a=re;
       }
       return b;

}
int main()
{
      long long int number1,number2,j,result,lcm;
     int test,i;
     cin>>test;
     for(i=0;i<test;i++)
     {
         cin>>number1>>number2;
          lcm=(number1*number2)/gcd(number1,number2);
          if(lcm<=number2)
          {
                 result=(lcm*number2)/number1;
                 cout<<result<<endl;
          }
          else{
              cout<<lcm<<endl;
          }

         }

     }


