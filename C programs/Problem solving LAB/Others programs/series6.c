//1*2*3+2*3*4+3*4*5+.....n*(n+1)*(n+2)
#include<stdio.h>
void main()
{
    int i,n,a,m,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  a=i;
    m=0;
    m=a*(a+1)*(a+2);
    sum=sum+m;
    }
    
    printf(" %d",sum);
}