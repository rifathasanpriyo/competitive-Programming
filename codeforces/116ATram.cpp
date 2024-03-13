#include<iostream>
using namespace std;
int main()
{
       long long int n;
       cin>>n;
       int row,col,total,sum[n],i=1,max,total2,b;
       int a[n][2];
       for(row=0;row<n;row++)
       {
             for(col=0;col<2;col++)
             {
                    cin>>a[row][col];
             }
       }
       total=a[0][0]+a[0][1];
       b=a[0][1];
       for(row=1;row<n;row++)
       {
              total2=total-a[row][0];
              sum[i]=total2+a[row][1];
              total=sum[i];
              i++;
       }
       max=sum[1];
       for(i=2;i<n;i++)
       {
            if(sum[i]>max)
            {
                   max=sum[i];
            }
       }
       if(max<b)
       {
              cout<<b;
       }
       else
       {
              cout<<max;
       }


}
