#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if(a||b>0){
        printf("True",a,b);
    }
    else if(a&&b<0){
        printf("False")
    }
    else
    printf("False",b,a);
    return 0;
}