#include <stdio.h>
#include <stdlib.h>

int main()
{ int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if( (year%4==0)&& (year%100 != 0)){
        printf("it's a leap year.");
    }
    else{
        printf("it's not a leap year.");
    }
    return 0;
}
