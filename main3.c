#include <stdio.h>
#include <stdlib.h>

int main()
{  char operator;
   float num1,num2,result;
    printf("Enter an operator(+,-,*,/):\n");
    scanf("%c",&operator);
    printf("Enter the two operands:\n");
    scanf("%f%f",&num1,&num2);
    switch(operator){
    case '+' :
    printf("(%.2f) + (%.2f) =%.2f",num1,num2,num1+num2);
              break;
    case '-':
    printf("(%.2f) - (%.2f) =%.2f",num1,num2,num1-num2);
              break;
    case'*':
    printf("(%.2f) * (%.2f) =%.2f",num1,num2,num1*num2);
              break;
    case'/':
    printf("(%.2f) / (%.2f) =%.2f",num1,num2,num1/num2);
              break;
    default:
    printf("Error!");

    }
    return 0;
}
