#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,colour=0;
    cin>>n>>m;
    char a[n*m];
    for(int i=0; i<m*n ; i++)
    {

               cin>>a[i];
               if( a[i]=='C' || a[i]=='M' || a[i]=='Y')
            {
                colour=1;
            }


    }

    if(colour==1)
    {
       cout<<"#Color"<<endl;
    }
    else
    {

           cout<<"#Black&White"<<endl;
    }

    return 0;
}
