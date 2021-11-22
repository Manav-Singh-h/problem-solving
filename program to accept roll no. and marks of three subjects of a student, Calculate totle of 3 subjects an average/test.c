#include <stdio.h>
int main()
{
    int marks1,marks2,marks3,Sum,Roll_no;
    float avg;
    printf("\n Enter Your Roll no. :"); scanf("%d",&Roll_no);
    printf("\n Enter your marks"); scanf("%d",&marks1);
    printf("\n Enter your marks"); scanf("%d",&marks2);
    printf("\n Enter your marks"); scanf("%d",&marks3);
    Sum = marks1+marks2+marks3;
    avg = Sum/3.0;
    printf("\n Student's Roll no. is : %d",Roll_no);
    printf("\n Subject1 marks : %d",marks1);
    printf("\n Subject2 marks : %d",marks2);
    printf("\n Subject3 marks : %d",marks3);
    printf("\n The total of marks is : %d",Sum);
    printf("\n The average of total marks is : %1.1f",avg);
}
