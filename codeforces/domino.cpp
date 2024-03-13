#include<iostream>
using namespace std;
int main()
{
     int a[6][7];
     int i,j,k,m,re,re2,total;
     for(i=0;i<5;i++)
     {
            for(j=0;j<5;j++)
            {

               cin>>a[i][j];
               if(a[i][j]!=0)
               {
                   k=i;
                   m=j;
               }
            }

     }
     if(m>2)
     {
         re=m-2;
     }
     else if(m<2)
     {
            re=2-m;
     }
     if(k>=2)
     {
            re2=k-2;
     }
     else if(k<=2)
     {
            re2=2-k;
     }
     total=re+re2;
     cout<<total;
}
