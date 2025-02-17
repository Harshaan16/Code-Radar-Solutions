// Your code here...
#include<stdio.h>
int main(){
    int n,product,i;
    scanf("%d",&n);
    product=0;
    for(i=1;i<=n;i++){
        product *=n*i;
    }
    printf("%d",product);
    return 0;
}