#include <stdio.h>
#include <time.h>

// Function to perform Insertion Sort on characters
void insertionSortChar(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

// Function to print an array of characters
void printArrayChar(char arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];
    printf("Enter the characters: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);  // Note the space before %c to consume any leftover whitespace
    }

    clock_t start = clock();
    insertionSortChar(arr, n);
    clock_t end = clock();

    printf("Sorted array: ");
    printArrayChar(arr, n);

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to sort: %f seconds\n", time_spent);

    return 0;
}
