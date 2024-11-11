//reverse the number is c:
#include <stdio.h>

int main() {
    int number,digit,reverse_Order;
    printf("enter three digit number:");
    scanf("%d",&number);
    
    if(number < 100 ||number >999){
        printf("invalid number:");
    } else {
        while(number != 0){
        digit = number % 10;
        reverse_Order = reverse_Order*10+digit;
        number /=10;
    }
    printf("reverse order digit: %d\n",reverse_Order);
    }
    return 0;
}
