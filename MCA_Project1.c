#include<stdio.h>
int xfun(int x);
int xyz(int x,int y,int z);
int xfun(int x){
    int k = (x*x)+(2*(x*x*x))+(2*x);
    printf("answer of the exuation is %d",k);
}int xyz(int x,int y,int z){
    int k = x+(y*y)+(z*z*z);
    printf("\nthe value of equation is %d",k);
}
int main(){
    int x,y,z;
    printf("enter the value of x:y:z:");
    scanf("%d%d%d",&x,&y,&z);
    xfun(x);
    xyz(x,y,z);
}
//o/p -   Enter the value of x:y:z:  4  5  8
// the value of x equation is 152
//the value of equation is 541
