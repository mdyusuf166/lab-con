#include <stdio.h>

void fibonacci(int N) {
    int a = 0, b = 1, next;
    
    for (int i = 1; i <= N; i++) {
        printf("%d", a);
        if (i < N) printf(" ");  

        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");  
}

int main() {
    int N;
    scanf("%d", &N);
    fibonacci(N);
    return 0;
}
