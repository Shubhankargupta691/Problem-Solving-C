#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int handshake=(n*(n-1))/2;
    printf("the Possible handsake at once are: %d",handshake);
}