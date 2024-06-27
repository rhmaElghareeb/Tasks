#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,reminder;
    int decimal=0,base=1;
    printf("Enter a binary number:\n");
    scanf("%d",&num);
    while(num!=0){
    reminder= num%10;
    decimal+=reminder*base;
    base*=2;
    num/=10;
    }

    printf("The equivalent number in decimal is:%d .\n",decimal);
    return 0;
}
