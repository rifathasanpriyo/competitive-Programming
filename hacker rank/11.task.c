#include<stdio.h>
//1 2 3 4 5
//
void array_re(int a[],int n)
{
  int temp,i;
  int n1=n-1;
  for(i=0;i<n/2;i++)
  {
         temp=a[i];
         a[i]=a[n1-i];
         a[n1-i]=temp;
  }
}


int main()
{
    int n,i,print;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    array_re(a,n);

    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }



}
