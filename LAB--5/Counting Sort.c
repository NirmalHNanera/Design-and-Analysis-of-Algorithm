#include <stdio.h>
#include <time.h>

// Function to perform Counting Sort
void countingSort(int arr[], int n, int k) {
    int count[k+1];
    for (int i = 0; i <= k; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]] += 1;

    int index = 0;
    for (int i = 0; i <= k; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the maximum value in the array for the range of counting sort
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    clock_t start = clock();
    countingSort(arr, n, max);
    clock_t end = clock();

    printf("Sorted array: ");
    printArray(arr, n);

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to sort: %f seconds\n", time_spent);

    return 0;
}
