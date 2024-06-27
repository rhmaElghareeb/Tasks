#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    int i,ones=0,zeros=0;
    printf("Enter any number: ");
    scanf("%d",&num);

       for(i=0;i<32;i++){
        if((num>>i)&1){
            ones++;
        }
        else
            zeros++;
    }
    printf("Total number of zeros:%d\n",zeros);

    printf("Total number of ones:%d",ones);
    return 0;
}
