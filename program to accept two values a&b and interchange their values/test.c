#include <stdio.h>
int main()
{
    int a,b,c; // c is a temperary variable
    printf("\n Enter value of a & b :"); scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n Now the value of a & b are : %d & %d",a,b);
    return 0;
}
