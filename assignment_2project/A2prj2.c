//print the series 10 22 46 94 190;
#include<stdio.h>
int main(){
    int series,i ,fterm=10, d=12;
    printf("enter the series how much terms you want print:");
    scanf("%d",&series);
    for(i=1; i<=series; i++){
    printf("%d\t",fterm);
    fterm += d;
    d *= 2;
    }
    return 0;
}
