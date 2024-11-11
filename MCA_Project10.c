// check numbe is positive or negative or zero
#include<stdio.h>
int main(){
    int number;
    const char *result;
    printf("enter the number:");
    scanf("%d",&number);
    result = (number > 0) ? "positive": (number<0)? "negative" :"zero";
    printf("the number is %s\n",result);
    return 0;
}
