//1+x+x*2/2!+x*3/3!+...
#include<stdio.h>
#include<math.h>
void main()
{
 int x,n,i,a,fac,sum=1;
 printf("enter the value of x :\nenter the value of n :");
 scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{   a=i;
    fac=1;
    while(a!=0)
    {
        fac=fac*a;
        a--;
    } 
    sum=sum+pow(x,i)/fac;
}
printf("%d",sum);


}