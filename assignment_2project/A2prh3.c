// print the series 2  9  39  161;
#include<stdio.h>
int main(){
    int series,i ,fterm=2, d=1;
    printf("enter the series how much terms you want print:");
    scanf("%d",&series);
    for(i=0; i<series; i++){
    printf("%d\t",fterm);
    fterm = (fterm *4) +d;
    d += 2;
    }
    return 0;
}
