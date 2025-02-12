#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);

    // Using isupper() and islower() functions
    if (isupper(a)) {
        printf("Uppercase");
    } 
    else(islower(a)) {
        printf("Lowercase");
    } 

    return 0;
}
