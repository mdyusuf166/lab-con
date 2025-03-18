#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100001]; 
    fgets(S, 100001, stdin); 

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == ',') {
            S[i] = ' ';
        } else if (isupper(S[i])) {
            S[i] = tolower(S[i]); 
        } else if (islower(S[i])) {
            S[i] = toupper(S[i]); 
        }
    }

    printf("%s", S); 
    return 0;
}
