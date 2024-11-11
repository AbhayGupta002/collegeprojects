//infinte loop for addition zero to end:
#include <stdio.h>

int main() {
    int i,j;
    for(; ; ){
       printf("enter the infinite no:(zero to end:)");
       scanf("%d",&j);
       if(j != 0){
           i+=j;
       }else{
           break;
       }
    }printf("\ntotal sum is %d",i);
    return 0;
}
