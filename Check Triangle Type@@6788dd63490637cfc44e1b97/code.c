// Your code here...
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else(a!=b && b!=c &&a!=c){
        printf("Scalene");
    }
    return 0;
}
