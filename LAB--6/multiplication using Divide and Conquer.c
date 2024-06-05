#include <stdio.h>
#include <math.h>

// Function to calculate the length of a number
int numLength(int num) {
    int length = 0;
    while (num > 0) {
        length++;
        num /= 10;
    }
    return length;
}

// Function to perform multiplication using Divide and Conquer
long long int multiply(long long int u, long long int v) {
    int n = numLength(u);
    if (n == 1) {
        return u * v;
    } else {
        int m = n / 2;
        long long int a = u / pow(10, m);
        long long int b = u % (long long int)pow(10, m);
        long long int c = v / pow(10, m);
        long long int d = v % (long long int)pow(10, m);

        long long int ac = multiply(a, c);
        long long int bd = multiply(b, d);
        long long int ad_bc = multiply(a + b, c + d) - ac - bd;

        return (long long int)(pow(10, 2 * m) * ac) + (long long int)(pow(10, m) * ad_bc) + bd;
    }
}

int main() {
    long long int u, v;

    printf("Enter two numbers to multiply: ");
    scanf("%lld %lld", &u, &v);

    long long int result = multiply(u, v);

    printf("Multiplication of %lld and %lld is: %lld\n", u, v, result);

    return 0;
}
