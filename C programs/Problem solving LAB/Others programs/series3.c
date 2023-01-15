//1-x*2/2!+x*3/3!-x*4/4!
#include<stdio.h>
#include<math.h>
void main()
{
 int x,n,i,a,fac;
 float sum=1;
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
    sum=sum+pow(-1,i)*(pow(x,i)/fac);
}
printf("%f",sum);


}