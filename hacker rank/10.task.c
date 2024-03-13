#include<stdio.h>
int main()
{
       int n,i,sum=0;

       scanf("%d",&n);
       int a[n];
       for(i=0;i<n;i++)//0 1 2 3 4 5
       {
           scanf("%d",&a[i]);
           sum=sum+a[i];

       }
printf("%d",sum);
return 0;
}
