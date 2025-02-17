// Your code here...
#include<stdio.h>
int main(){
    int n,product,i;
    scanf("%d",&n);
    product=1;
    for(i=1;i<=n;i++){
        product *=i;
    }
    printf("%d",product);
    return 0;
}