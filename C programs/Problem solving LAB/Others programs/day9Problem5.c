#include<stdio.h>
int main()
{
    int num,k=0;
    printf("Enter the value: ");
    scanf("%d",&num);
        while(num!=0)
        {
            if(num%2==0){
                num=num/2;
            }
            else
            {
                num=num-1;
            }
            k++;
        }
    printf("steps: %d",k);
}