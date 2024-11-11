//Q-5 take 3 input or print the string in as cending order
//print the series in ascending order
#include<stdio.h>
int main(){
    int num1,num2,num3;
    int temp;
    printf("enter the number a:b:c:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("\nTHE SERIES IS %d %d %d",num1,num2,num3);
    if(num1>num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }if(num1>num3){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }if(num2>num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
}
