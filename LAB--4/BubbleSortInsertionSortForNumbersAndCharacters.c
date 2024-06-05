#include <stdio.h>
#include <time.h>
#include <ctype.h>

// Function to perform Bubble Sort on integers
void bubbleSortInt(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to perform Bubble Sort on characters
void bubbleSortChar(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to perform Insertion Sort on integers
void insertionSortInt(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

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

// Function to print an array of integers
void printArrayInt(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to print an array of characters
void printArrayChar(char arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

int main() {
    char type;
    int choice;
    printf("Enter 'I' for integers or 'C' for characters: ");
    scanf(" %c", &type);

    if (toupper(type) == 'I') {
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Choose sorting method: 1 for Bubble Sort, 2 for Insertion Sort: ");
        scanf("%d", &choice);

        clock_t start = clock();
        if (choice == 1) {
            bubbleSortInt(arr, n);
        } else if (choice == 2) {
            insertionSortInt(arr, n);
        }
        clock_t end = clock();

        printf("Sorted array: ");
        printArrayInt(arr, n);

        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Time taken to sort: %f seconds\n", time_spent);

    } else if (toupper(type) == 'C') {
        int n;
        printf("Enter the number of characters: ");
        scanf("%d", &n);

        char arr[n];
        printf("Enter the characters: ");
        for (int i = 0; i < n; i++) {
            scanf(" %c", &arr[i]);  // Note the space before %c to consume any leftover whitespace
        }

        printf("Choose sorting method: 1 for Bubble Sort, 2 for Insertion Sort: ");
        scanf("%d", &choice);

        clock_t start = clock();
        if (choice == 1) {
            bubbleSortChar(arr, n);
        } else if (choice == 2) {
            insertionSortChar(arr, n);
        }
        clock_t end = clock();

        printf("Sorted array: ");
        printArrayChar(arr, n);

        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Time taken to sort: %f seconds\n", time_spent);

    } else {
        printf("Invalid input\n");
    }

    return 0;
}
