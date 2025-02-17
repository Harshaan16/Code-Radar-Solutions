// Your code here...
#include<stdio.h>
int main(){
    int n,product;
    scanf("%d",&n);
    product=1;
    for(i=1;i<=10;i++){
        product *=i;
    }
    printf("%d",product);
    return 0;
}