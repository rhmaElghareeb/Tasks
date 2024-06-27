#include <stdio.h>
#include <stdlib.h>

void Sorting(int *arr,int size,int *min, int *max){
int i,j,temp;
  for(i=0;i<(size-1);i++){
    for(j=0;j<(size-1)-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
     }
    }
  }
   *min=arr[0];
   *max=arr[size-1];
}
//---------------------------------------------------------------------------------------------------------------------------------------

int main()
{ int arr[100],i;
  int size, max=0,min=0;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  printf("Enter the elements of the array: \n");

      for(i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
   Sorting(arr,size,&min,&max);
   printf("The maximum number is:%d\n",max);
   printf("The minimum number is:%d\n",min);
    return 0;
}
