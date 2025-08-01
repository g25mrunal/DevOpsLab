#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparisons and swaps in each pass
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n); // Call the bubble sort function

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}