#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    printf("Original Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Rotate Matrix by 90 degrees\n");
    for(i=2;i>=0;i--)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}