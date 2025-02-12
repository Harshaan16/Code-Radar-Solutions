// Your code here...
#include<stdio.h>
int main(){
    int C,S;
    scanf("%d &d",&C,&S);
    if(C-S>0){
        printf("Profit");
    }
    else if(C-S<0){
        printf("Loss");
    }
    else if(C-S==0){
        printf("No Profit No Loss");
    }
    return 0;
}