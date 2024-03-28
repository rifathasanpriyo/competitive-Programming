#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=n;
        int temp2=0;
        int re=0;
        int count1=0,count2=0;
        while(temp!=0)
        {
             re = (count2 == 0) ? temp % 11 : temp % 10;
             if(re==0&&count2==0)
            {
                temp2=temp/11;
                temp=temp/11;
            }
            else if(count2==0)
            {
               temp=temp2;
               count2++;
            }
            else if((re!=0 || re!=1) && count2!=0)
            {
                temp=temp/10;
                count1=1;
            }
            else{
              temp=temp/10;
            }


           re=0;
        }
        if(count1==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
