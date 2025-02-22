//take 10 input in array or add total positive or nagative number:
#include<stdio.h>
int main(){
    int a[10],i,pos_n=0,neg_n=0;
    printf("Enter 10 number:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>0)
            pos_n++;
        else if(a[i]<0)
            neg_n++;
    }
    printf("Total positive number is %d \n",pos_n);
    printf("Total negative nnumber is %d\n",neg_n);
    return 0;
}
