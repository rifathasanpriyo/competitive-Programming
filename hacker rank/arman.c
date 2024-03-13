#include<stdio.h>

int main()
{
       int n,i,j;
       printf("Enter Size= ");
       scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("Enter 1st Arry");
    for(i=0;i<n;i++)
    {
           scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd Arry");
    for(j=0;j<n;j++)
    {
          scanf("%d",&arr2[j]);
    }
    printf("The marged Arry");
    {
           for(i=n-1,j=n-1;i>=0,j>=0;i--,j--)
           {
                  printf("%d%d ",arr1[i],arr2[j]);
           }
    }


}
