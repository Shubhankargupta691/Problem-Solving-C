#include<stdio.h>
#define N 10
void main()
{
printf("SHUBHANKAR\n");

    int a[N],b[N],c[N],d[N],m=0,k=0,n1,n2,l,i,j;

    printf("Enter size of set A\n");
    scanf("%d",&n1);

    printf("Enter element of set\n");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Enter size of set B\n");
    scanf("%d",&n2);

    printf("Enter element of set B\n");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);


    // difference find A-B

    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {

//to check no same element present in the set
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }

    }

    // difference find B-A

    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          //to check no same element present in the set
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }

    }
     printf("Difference of A-B is\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is\n");
     for(i=0;i<m;i++)
     {
         printf("%d ",d[i]);
     }
}


