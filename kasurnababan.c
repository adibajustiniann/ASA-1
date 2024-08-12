#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char S[21];
    int i, j, len;
    int is_palindrome = 1;
    scanf("%s", S);
    len = strlen(S);
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (S[i] != S[j]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("YA\n");
    } 
    else {
        printf("BUKAN\n");
    }
    return 0;
}
