#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("greatest is: %d",a);
        }
        else
        {
            printf("greatest is: %d",c);
        }
    }
    else{
        if(b<c)
        {
            printf("greatest is: %d",c);
        }
        else{
            printf("greatest is: %d",b);
        }
    }
    return 0;
}