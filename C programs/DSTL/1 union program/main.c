#include<stdio.h>
#define N 10
void main()
{
    printf("SHUBHANKAR\n");

    int a[N],b[N],i,c[N],j,k=0,n1,n2;

// taking input set A

    printf("Enter number of  element of set A\n");
    scanf("%d",&n1);
    printf("Enter the element of set A \n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

// taking input set B

    printf("Enter number of element of set B\n");
    scanf("%d",&n2);
    printf("Enter the element of set B \n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);



// copy the element of set A in set C
    for(i=0;i<n1;i++)
    {
// repeted element is not allowed so we check is any value repeted
        for(j=0;j<k;j++)
        {
            if(c[j]==a[i])
                break;
        }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }

    for(i=0;i<n2;i++)
    {

        for(j=0;j<k;j++)
        {
            if(c[j]==b[i])
                break;
        }
        if(j==k)
        {
            c[k]=b[i];
            k++;
        }
    }
// printing of union of set A and set B
    printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
}