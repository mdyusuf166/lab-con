#include <stdio.h>

int main() {
    long long A, B, C, D, result;

    
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    
    result = (A % 100) * (B % 100) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) %100;
    printf("%lld\n", result);

    return 0;
}
