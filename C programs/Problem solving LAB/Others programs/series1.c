//1+2!+3!+4!+....
#include<stdio.h>
void main()
{   int n,a,fac,sum=0;
printf("enter the value of n :");
scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    a=i,fac=1;
    while(a!=0)
    {
        fac=fac*a;
        a--;
    }
    sum=sum+fac;
    }
    
printf("the sum of the series is %d",sum);
    }