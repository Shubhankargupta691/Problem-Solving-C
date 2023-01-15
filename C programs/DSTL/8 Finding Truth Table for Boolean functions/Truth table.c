
#include<stdio.h>

int find_OR();

int find_NOT(int a, int i);

int find_AND(int a, int b);

int find_NOT(int a);

int find_NOT(int i);

void exit(int i);

int find_NOT(int i);

int find_NOT(int i);

void main(){
    int ch,a,b;
    printf("1. OR");
    printf("1. AND");
    printf("1. NOT");
    printf("1. exit");
    while (1) {
        printf("Enter your choice");
        scanf("%d",&ch);
        switch (ch) {
        
            case 1: printf("input 1 for true and 0 for false");
                scanf("%d",&a);
                scanf("%d",&b);

                printf("%d",find_OR(a,b));
                break;

            case 2: printf("input 1 for true and 0 for false");
                scanf("%d",&a);
                scanf("%d",&b);

                printf("%d",find_AND(a,b));
                break;

            case 3: printf("input 1 for true and 0 for false");
                scanf("%d",&a);
                printf("%d", find_NOT(a));
                break;

            case 4: exit(0);
            default:  printf("Wrong choice");

        }

    }
}

int find_NOT(int i) {
    if(x==1)
        return 1;
    else
    return 0;
}

void exit(int i) {

}

int find_AND(int x, int y) {
    if(x==1 && y==1)
        return 1;
        else
        return 0;
}

int find_OR(int x, int y) {
    if(x==1 && y==0)
    return 1;
    if(x==1 && y==0 || x==0 && y==1)
        return 1;
    if(x==0 && y==0)
        return 1;
}
