#include<stdio.h>
void main()
{
int i,n,m,sum=0,num=1;
printf("enter the number of elements :");
scanf("%d",&n);
while(num<=n)
{
    m=1;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    sum=sum+m;
    num++;
}
printf("%d",sum);
}