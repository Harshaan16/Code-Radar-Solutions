// Your code here...
int main() {
    int N;
    printf("%d",N);
    scanf("%d", &N);
    
    for (int i = 1; i <=N; i++) { 
        for (int j = i; j <= N; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;
}
