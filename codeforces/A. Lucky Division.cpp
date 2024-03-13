#include<iostream>
using namespace std;
int main()
{
       int n,re,count=0,count1=0;
       cin>>n;
       int temp=n;
       while(temp!=0)
       {
              re=temp%10;
              if(re==4||re==7)
              {
                     count++;
              }
              temp=temp/10;
              count1++;
       }
      if(count==count1 || n%4==0 || n%7==0||n%44==0||n%77==0||n%74==0||n%47==0||n%444==0||n%447==0||n%477==0||n%777==0||n%744==0||n%747==0||n%474==0)
      {
             cout<<"YES";

      }
      else
      {
             cout<<"NO";
      }
}
