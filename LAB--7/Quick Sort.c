#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {3, 1, 4, 5, 9, 2, 6, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 5, 3, 11, 10, 4, 7, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Original array 1: ");
    printArray(arr1, n1);
    quickSort(arr1, 0, n1 - 1);
    printf("Sorted array 1: ");
    printArray(arr1, n1);

    printf("Original array 2: ");
    printArray(arr2, n2);
    quickSort(arr2, 0, n2 - 1);
    printf("Sorted array 2: ");
    printArray(arr2, n2);

    return 0;
}
