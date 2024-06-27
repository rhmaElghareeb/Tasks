#include <stdio.h>
#include <stdlib.h>

int main()
{ int size,i,arr[100];
  int oddc=0,evenc=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if((arr[i])% 2 ==0){
            evenc++;
        }
        else
            oddc++;
    }
     printf("\nTotal even numbers =%d\n",evenc);
     printf("Total odd numbers =%d\n",oddc);
    return 0;
}
