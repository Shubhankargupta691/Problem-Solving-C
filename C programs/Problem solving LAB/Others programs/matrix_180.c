#include <stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    int N=3;
    printf("Rotate Matrix by 180 degrees\n");
    for (int i = N - 1; i >= 0; i--) { 
        for (int j = N - 1; j >= 0; j--) 
            printf("%d ", a[i][j]);
        printf("\n"); 
}
return 0;
}
