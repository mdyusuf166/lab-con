#include<stdio.h>

int main() {
    int N, reversed = 0, original, reminder;
    
    scanf("%d", &N);
    original = N; 
    
    
    while (N > 0) {
        reminder = N % 10;
        reversed = reversed * 10 + reminder;
        N = N / 10;
    }
    
    printf("%d\n", reversed);

    
    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
