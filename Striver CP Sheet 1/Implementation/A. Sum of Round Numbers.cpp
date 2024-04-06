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
        int temp=n,temp1=n;
        int count1=0,count2=0;
        while(temp1!=0)
        {
            int re1=temp1%10;
            temp1=temp1/10;

            if(re1!=0)
            {
                count2++;
            }

        }
        cout<<count2<<endl;
        while(temp!=0)
        {
            int re=temp%10;
            temp=temp/10;

            if(re!=0)
            {
                cout<<re;
                for(int i=0; i<count1; i++)
                {
                    cout<<"0";
                }
                cout<<" ";
            }
            count1++;

        }
        cout<<endl;
    }
}
