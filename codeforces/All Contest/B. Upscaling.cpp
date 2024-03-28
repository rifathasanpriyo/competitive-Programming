#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
        int n,count1=1,count2=0,count3=1,count4=1;
        cin>>n;
        if(n%2==0)
        {
           for(int i=1;i<=n*2;i++)
        {
              if(count3%2!=0)
              {

               for(int j=1;j<=n;j++)
            {
                 if(count1%2==0)
            {

                   cout<<"..";
                   count1++;
                   count2++;
            }
            else{
              cout<<"##";
              count1++;
              count2++;
            }

            }

              }
              else{

            for(int j=1;j<=n;j++)
            {
                 if(count1%2==0)
            {

                   cout<<"##";
                   count1++;
                   count2++;
            }
            else{
              cout<<"..";
              count1++;
              count2++;
            }

            }
              }
             if(count4%2==0)
             {
                count3++;
             }
             count4++;
            cout<<endl;

        }
        }
        else
        {
           for(int i=1;i<=n*2;i++)
        {
              if(count3%2!=0)
             {

               for(int j=1;j<=n;j++)
            {
                 if(count1%2==0)
            {

                   cout<<"..";
                   count1++;
                   count2++;
            }
            else{
              cout<<"##";
              count1++;
              count2++;
            }

            }

              }
              else{

            for(int j=1;j<=n;j++)
            {
                 if(count1%2==0)
            {

                   cout<<"##";
                   count1++;
                   count2++;
            }
            else{
              cout<<"..";
              count1++;
              count2++;
            }

            }
              }
             if(count4%2!=0)
             {
                count3++;
             }
             count4++;
            cout<<endl;

        }



        }

 }

return 0;
}
