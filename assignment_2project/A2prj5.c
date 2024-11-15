//7 10 8 11
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the termes:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        if(i%2==0)
        printf("%d\t",7+(i/2));
        else
        printf("%d\t",10+(i/2));
    }
    return 0;
}
//op - enter the termes:6
//7	10	8	11	9	12	
