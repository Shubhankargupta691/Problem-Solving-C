#include<stdio.h>
#define N 10

int arr[N];
int TOP1 = -1;
int TOP2 = N;

int isFull1(){
    if(TOP1 == (N/2)-1)
        return -1;
    else
        return 0;
}
int isFull2(){
    if(TOP2 == N-1)
        return -1;
    else
        return 0;
}

int isEmpty1(){
    if(TOP1 == -1)
        return 1;
    else
        return 0;
}
int isEmpty2(){
    if(TOP2 == -1)
        return 1;
    else
        return 0;
}


void push1(){
    if(isFull1()) {
        printf("Overflow");
    }else{
        int x;
        printf("Enter value to enter in stack 1 :\n");
        scanf("%d",&x);
        TOP1 = TOP1 + 1;
        arr[TOP1] = x;
    }
}
void push2(){
    if(isFull2()) {
        printf("Overflow");
    }else{
        int x;
        printf("Enter value to enter in stack 2 :\n");
        scanf("%d",&x);
        TOP2 = TOP2 + 1;
        arr[TOP2] = x;
    }
}
void Display1(){
    if (isEmpty1()){
        printf("Stack 1 is under flow");
    }else{
        printf("\nElements present in the stack 1: \n");
        for (int i = TOP1; i >= 0; i--) {
                printf("%d\n",arr[i]);
        }
    }
}
void Display2(){
    if(isEmpty2()){
        printf("stack 2 is underflow");
    }else{
        printf("\nElements present in the stack 2: \n");
        for (int j = TOP2; j > N; j--) {
            printf("%d\n",arr[j]);
        }
    }
}

void pop1(){
    if(isEmpty1()){
        printf("stack 2 is underflow");
    }else{
        TOP1 = TOP1 - 1;
        printf("Element poped by stack 1: %d",arr[TOP1]);
    }
}
void pop2(){
    if(isEmpty2()){
        printf("stack 2 is underflow");
    }else{
        TOP2 = TOP2 - 1;
        printf("Element popped by stack 2");
    }
}

void main() {

    int ar[N];
    int ch;
    while (1) {
        printf("\nOperations performed by Stack\n");
        printf("\n1.Push the element in Stack 1\n2.Push the element in Stack 2\n3.POP 1 \n4.POP 2 \n5.Display 1\n6.Display 2\n7.exit\n");
        printf("enter your choice:\n");
        scanf("%d", &ch);

        switch (ch) {

            case 1: {
                for (int i = 0; i < (N / 2); ++i) {
                    push1(i);
                }
            }
                break;

            case 2: {
                for (int j = ((N / 2) + 1); j < N; j++) {
                    push2(j);
                }
            }
            break;

            case 3:
                pop1();
                break;

            case 4:
                pop2();
                break;

            case 5:
                Display1();
                break;

            case 6:
                Display2();
                break;

            case 7:
                exit(0);

            default:
                printf("invalid choice");
        }
    }
}