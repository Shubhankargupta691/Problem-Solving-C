#include <stdio.h>
#include <conio.h>
int main()
{
    int base, exponent, counter, result = 1,mul=1,k;
    printf("Enter base and exponent and Kth term: ");
    scanf("%d%d%d", &base, &exponent,&k);
    for(counter = 0; counter < exponent; counter++)
    {
        result = result * base;
    }
    printf("%d\n",result);
    if(k==1)
    {
        mul=result%10;
    }
    else
    {for(int i=1;i<k;i++)
    {
        result=result/10;
        mul=result%10;
    }}
    printf("answer id: %d",mul);
    return 0;
}