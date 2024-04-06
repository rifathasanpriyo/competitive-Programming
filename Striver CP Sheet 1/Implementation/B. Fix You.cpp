
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count1=0;
        cin>>n>>m;
        char ch;
        for(int row=1;row<=n;row++)
        {
               for(int col=1;col<=m;col++)
               {
                   cin>>ch;
                   if(col==m && ch=='R' && row!=n)
                   {
                          count1++;
                   }
                   else if(row==n && ch=='D'){

                            count1++;
                   }
               }
        }
        cout<<count1<<endl;

    }

    return 0;
}
