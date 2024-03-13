#include<stdio.h>
int main()
{
    int n1,n2,sum1,dif1;
    float f1,f2,sum2,dif2;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&f1,&f2);
    sum1=n1+n2;
    dif1=n1-n2;
    sum2=f1+f2;
    dif2=f1-f2;

    printf("%d %d\n",sum1,dif1) ;
    printf("%.1f %.1f",sum2,dif2)  ;

}
