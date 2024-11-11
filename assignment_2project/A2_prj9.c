//print the series 1/1+1/2+1/3....
#include <stdio.h>

int main() {
    int i,j;
    printf("enter the term:");
    scanf("%d",&j);
    for(i=1; i<=j; i++){
       printf("1/%d+",i);
    }
    return 0;
}
