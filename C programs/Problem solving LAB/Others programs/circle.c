#include<stdio.h>
#include<math.h>
float circlearea(float l, float b)
{
    if (l < 0 || b < 0)
        return -1;
    if (l < b)
        return 3.14 * pow(l / 2, 2);
    else
        return 3.14 * pow(b / 2, 2);
}
int main()
{
    float l,b;
    printf("Enter the value of length and breadth: ");
    scanf("%f%f",&l,&b);
    printf("%f",circlearea(l,b));
    return 0;
}