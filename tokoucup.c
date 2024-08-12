#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p, n;
    int promo = 0;
    int reg = 0;
    scanf("%d", &p);
    scanf("%d", &n);
    for(int i=0; i<=(n/4)+1; i++){
        for(int j=0; j<=n; j++){
            if((i*20000 + j*5000 == p && i*5+j == n)){
                promo = i;
                reg = j;
            }
        }
    }
    printf("%d %d",promo, reg);
    return 0;
}