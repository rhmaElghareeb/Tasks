#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{  char string[100];
   int size;
    printf("Enter your string:\n");
    fgets(string,sizeof(string),stdin);
    size=strlen(string);

    char copy[size+1];
    for(int i=0;i<size;i++){
        copy[i]=string[i];
    }
    printf("\n%s\n",copy);
    return 0;
}
