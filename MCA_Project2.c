//side = m*m - n*n;
//side2 = 2mn;
//hypotenuse m*m + n*n
//use functions with parameter
#include<stdio.h>
int side(int m,int n);
int side2(int m, int n);
int hypo(int m,int n);
        int side(int m,int n){
        int j = (m*m) - (n*n);
        printf("the value of side is %d\n",j);
    }
    int side2(int m ,int n){
        int k = 2*m*n;
        printf("the value of side2 is %d\n",k);
    }
    int hypo(int m,int n){
        int l = m*m + (n*n);
        printf("the value of hypotenuse is %d\n",l);
    }
int main(){
    int m,n;
    printf("enter the value of m,n:");
    scanf("%d%d",&m,&n);
    side(m,n);
    side2(m,n);
    hypo(m,n);
}
//o/p - enter the value of m,n: 10 20 
// the value of side is -300
//the value of side 2 is %400
//the value of hypotenuse is 500
