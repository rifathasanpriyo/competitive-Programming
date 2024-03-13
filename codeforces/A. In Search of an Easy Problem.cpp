#include<iostream>
using namespace std;
int main()
{
       int n,question,count=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
              cin>>question;
              if(question==1)
              {
                     count++;
              }
       }
       if(count>0)
       {
              cout<<"HARD";
       }
       else{
              cout<<"EASY";
       }
}
