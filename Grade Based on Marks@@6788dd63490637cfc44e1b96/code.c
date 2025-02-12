// Your code here...
#include<stdio.h>
int main(){
    int M;
    scanf("%d",&M);
    if(M>=90){
        printf("A");
    }
    else if(M<90 && M>=80 ){
        printf("B");
    }
    else if(M<80 && M>=70 ){
        printf("C");
    }
    else if(M<70 && M>=60 ){
        printf("D");
    }
    else if(M<60){
        printf("F");
    }
    return 0;
}