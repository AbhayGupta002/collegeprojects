//print the series A+1+b+2+c+3.....
#include <stdio.h>

int main() {
    int i,j;
    printf("enter the term:");
    scanf("%d",&j);
    printf("A+1+");
    for(i=1; i<j; i++){
        printf("%c+",'a'+i);
        printf("%d+",i+1);
    }
    return 0;
}
//op-enter the term:5
//A+1+b+2+c+3+d+4+e+5+
