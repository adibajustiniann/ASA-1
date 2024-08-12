#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//mengecek apakah baris memiliki dua sosis bersebelahan
int check(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] == 1 && arr[i-1] == 1) {
            return 0;
        }
    }
    return 1;
}

//fungsi rekursif untuk menghasilkan semua kemungkinan baris
void generate(int arr[], int n, int k) {
    if (n == k) {
        if (check(arr, k)) {
            for (int i = 0; i < k; i++) {
                printf("%d", arr[i]);
            }
            printf("\n");
        }
        return;
    }
    arr[n] = 0; //angka ke-n adalah telur
    generate(arr, n+1, k);
    arr[n] = 1; //angka ke-n adalah sosis
    generate(arr, n+1, k);
}

int main() {
    int k;
    scanf("%d", &k);
    int arr[k];
    generate(arr, 0, k);
    return 0;
}