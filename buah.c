#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    
    int kpk = 1;
    while ((kpk % a != 0) || (kpk % b != 0)) {
        kpk++;
    }
    
    int iA, iB, sum;
    iA = kpk / a;
    iB = kpk / b;
    sum = iA + iB;
    printf("%d", sum);
    return 0;
}