//print the series
#include<stdio.h>
int main(){
    int base = 2;
    int terms ,m,i;
    printf("enter series of termes:");
    scanf("%d",&terms);
    printf("the series is:");
    for(i=0; i<terms; i++){
        m= base*base;
        base*=3;
        printf("%d",m);
        if(i<terms-1){
            printf(", ");
        }
    }printf("\n");
    return 0;
}
