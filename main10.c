#include <stdio.h>
#include <stdlib.h>

int main()
{  int num,bitNum;
    printf("Enter your number:\n");
    scanf("%d",&num);
    printf("Enter the bit number to check:\n");
    scanf("%d",&bitNum);
    if((num>>bitNum)&1){
        printf("This bit is set yo 1.");
    }
    else
        printf("This bit is set to 0.");
    return 0;
}
