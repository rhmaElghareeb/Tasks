#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,sum=0;

    printf("Enter any number:\n");
    scanf("%d",&num);
    while(num !=0){
        sum+= (num % 10);
        num/= 10;
    }
    printf("The sum of the digits = %d",sum);
    return 0;
}
