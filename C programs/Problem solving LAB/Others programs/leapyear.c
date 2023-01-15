#include<stdio.h>
int main()
{
    int i;
    printf("Enetr a year to check leap Year");
    scanf("%d",&i);
    (((i%4==0)&&(i%100==0))||(i%400==0))?printf("leap year"):printf("Not a leap Year");
    return 0;
}