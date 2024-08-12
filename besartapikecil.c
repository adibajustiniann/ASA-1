#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a[99], k;
    scanf("%d", &n);
    for (int i=0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &k);
    int idx = -1;
 
    //binary search
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] >= k) {
            idx = mid;
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }
    
    printf("%d\n", idx);
    return 0;
}
