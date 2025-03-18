// Your code here...
#include <stdio.h>

void leftRotate(int arr[], int size, int rotations) {
    for (int r = 0; r < rotations; r++) {
        int temp = arr[0]; // Store the first element
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift left
        }
        arr[size - 1] = temp; // Move first element to the end
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int rotations = 2; // Number of left rotations
    leftRotate(arr, size, rotations);
    
    printArray(arr, size); // Output: 3 4 5 1 2

    return 0;
}
