#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=N;i<=N;i--){
        for(int j=i;j<=i;j++)
        printf(" * ");
    }
    printf("\n");

    return 0;
}
