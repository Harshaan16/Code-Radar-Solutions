// Your code here...
#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a , &b, &c);
    if( a==b && b==c){
        printf("Equilateral");
    }
    if else(a==b || c==b|| a==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}
