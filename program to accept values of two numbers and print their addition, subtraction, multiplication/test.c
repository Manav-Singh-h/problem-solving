#include <stdio.h>
int main()
{
    int x,y,sum,sub,mul;
    printf("\n Enter Value of x:"); scanf("%d",&x);
    printf("\n Enter VAlue of y:"); scanf("%d",&y);
    sum = x+y;
    sub = x-y;
    mul = x*y;
    printf("\n Sum of x and y is %d",sum);
    printf("\n Sub of x and y is %d",sub);
    printf("\n mul of x and y is %d",mul);
    return 0;
}
