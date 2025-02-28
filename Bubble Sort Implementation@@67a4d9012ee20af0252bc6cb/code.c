#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // To ensure output is properly formatted
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);      // Find the size of the array
    
    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);  // Sort the array

    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
