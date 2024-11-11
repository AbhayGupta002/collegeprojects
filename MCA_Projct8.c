//Q-8 
#include<stdio.h>
int areaOfRect(int length,int width);
int areaOfRect(int length, int width){
    float c;
    c = length*width;
    printf("area of rectangle is: %.2f:",c);
    c/=2;
    printf("\ntime for cut the grass is %.2f",c);
    
}
int main(){
    int length,width;
    printf("enter the length & width of yrd:");
    scanf("%d%d",&length,&width);
    areaOfRect( length, width);
}
