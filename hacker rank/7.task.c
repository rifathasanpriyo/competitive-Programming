#include<stdio.h>
int main()
{
     int n1,r,t,sum=0;
     scanf("%d",&n1);
     t=n1;
     while(t!=0)
     {
        r=t%10;
        sum=sum+r;
        t=t/10;
     }
printf("%d",sum);


}
