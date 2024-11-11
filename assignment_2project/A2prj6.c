//print the series 
#include <stdio.h>
int main() {
    int i,j;
    printf("enter the term:");
    scanf("%d",&j);
    for(i=0; i<j; i++){
        printf("%c",'B'+(i*2));
        printf("%c",'A'+i);
        printf("%c\t",'Z'-i);
    }
    return 0;
}
