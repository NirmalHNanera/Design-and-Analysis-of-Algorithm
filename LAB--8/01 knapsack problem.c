#include <stdio.h>

// Function to find maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to implement 0/1 knapsack problem
int knapsack(int W, int wt[], int val[], int n) {
    int i, w;
    int K[n + 1][W + 1];

    // Build table K[][] in bottom-up manner
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    // Return the maximum value that can be put in a knapsack of capacity W
    return K[n][W];
}

int main() {
    int i, n, W;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    int val[n], wt[n];
    printf("Enter the values and weights of the items:\n");
    for (i = 0; i < n; i++) {
        printf("Value[%d]: ", i + 1);
        scanf("%d", &val[i]);
        printf("Weight[%d]: ", i + 1);
        scanf("%d", &wt[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &W);

    printf("Maximum value in knapsack: %d\n", knapsack(W, wt, val, n));

    return 0;
}
