//print the series 1,1/3,1/5,1/7
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms in the series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("1/%d," ,2*i-1);
    }
    return 0;
}
