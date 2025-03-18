#include <stdio.h>

int main() {
    int N, sum = 0;
    char digit;

    scanf("%d", &N);  
    for (int i = 0; i < N; i++) {
        scanf(" %c", &digit);  
        sum += digit - '0';  
    }

    printf("%d\n", sum);
    return 0;
}
