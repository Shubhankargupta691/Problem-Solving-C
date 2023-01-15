#include<stdio.h>
#include<string.h>
int main()
{
    char aj1[100], aj2[100];
    int compare;
    printf("Enter 1st string: ");
    gets(aj1);
    printf("Enter 2nd string: ");
    gets(aj2);
    compare = strcmp(aj1, aj2);
    if(compare == 0)
        printf("\nBoth the strings are exactly same.");
    else
        printf("\nBoth the strings are different.\n");
    return 0;
}