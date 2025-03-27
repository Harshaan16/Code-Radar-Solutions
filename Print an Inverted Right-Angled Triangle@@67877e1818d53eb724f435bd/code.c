// Your code here...
int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    for (int i = N; i > 0; i--) { // Loop for each row
        for (int j = 0; j < i; j++) { // Loop to print stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
