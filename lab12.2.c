#include <stdio.h>

int main() {
    long long A, B, C, D, result;

    // Read input values
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    // Multiply all numbers
    result = A * B * C * D;

    // Extract the last two digits
    result = result % 100;

    // Print the result ensuring two-digit format
    printf("%02lld\n", result);

    return 0;
}
