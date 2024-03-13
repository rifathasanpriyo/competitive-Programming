#include<iostream>
using namespace std;
int main()
{
      long long int n,count1=0;
       cin>>n;

 while(n!=0)
       {
               if(n%10==4||n%10==7)
              {
                     count1++;
              }

              n=n/10;

       }
       if(count1==4 || count1==7)
       {
              cout<<"YES";
       }
       else
       {
              cout<<"NO";
       }

}
