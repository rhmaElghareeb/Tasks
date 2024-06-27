#include <stdio.h>
#include <stdlib.h>

int main()
{   float num,result=1;
    int power,i;
    printf("Enter the number:\n");
    scanf("%f",&num);
    printf("Enter it's power:\n");
    scanf("%d",&power);
    for(i=0;i<power;i++){
        result*=num;
    }
    printf("the result is:%.2f",result);
    return 0;
}
