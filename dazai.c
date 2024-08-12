#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[256];
    int i, count, jumlah = 0;
    scanf("%s", arr);
    
    for(i=0; i < strlen(arr); i++) {
        if(arr[i]!='a' && arr[i]!='i' && arr[i]!='u' && arr[i]!='e' && arr[i]!='o'){
            jumlah++;
        }
    }
    count = pow(2,jumlah)-1;
    printf("%d",count);
    return 0;
}