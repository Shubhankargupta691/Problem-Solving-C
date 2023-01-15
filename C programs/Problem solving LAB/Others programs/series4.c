#include<stdio.h>
#include<math.h>
void main()
{
    int x,i,fac=1,n,a;
    float sum=0,sum1=0,sum2=0;
    printf("enter the value of x and n :");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i+=4)
    {  a=i;
       fac=1;
        while(a!=0)
        {
            fac=fac*a;
            a--;
        }
        sum=sum +pow(-1,i+1)*pow(x,i)/fac;
    }
        for(i=3;i<=n;i+=4)
        {    
            a=i;
            fac=1;
            while(a!=0)
            {
                fac=fac*a;
                a--;
            }
            sum2=sum+pow(-1,i)*pow(x,i)/fac;
        }
        sum=sum1+sum2;
        printf("%f",sum);
        
}   
