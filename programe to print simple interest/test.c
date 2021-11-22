#include <stdio.h>
int main()
{
    float P,R,T,SI;
    printf("\n Enter the value of P,R,T :"); scanf("%f%f%f",&P,&R,&T);
    SI= P*R*T/100;
    printf("\n Simple interest is: %1.1f",SI);
    return 0;
}
