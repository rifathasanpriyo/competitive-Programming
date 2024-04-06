#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count1=0,count2=0,count3=1;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(count1<m)
            {
                cout<<"#";
                count1++;
                count2=0;
            }
            else if(count3%2 !=0)
            {
                if(count2<m-1)
                {
                    cout<<".";
                    count2++;
                }
                else
                {
                    cout<<"#";
                    count1=0;
                    count3++;
                }

            }
            else
            {
                if(count2==0)
                {
                    cout<<"#";
                    count2++;
                }
                else
                {
                    if(count2<m)
                    {
                        cout<<".";
                        if(count2==m-1)
                    {
                        count1=0;
                        count3++;
                    }
                        count2++;
                    }


                }
            }
        }
        cout<<endl;
    }

    return 0;
}
