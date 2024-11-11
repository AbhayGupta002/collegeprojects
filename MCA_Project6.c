// check even or odd;
#include<stdio.h>
int main(){
    int num;
    printf("enter hte number check even of odd:");
    scanf("%d",&num);
    if(num & 1){
        printf("number is odd:");
    }else{
            printf("number is even:");
    }
}
