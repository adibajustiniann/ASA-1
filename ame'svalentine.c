#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int fpb;
    if (x > y){
        fpb = x;
    }
    else{
        fpb = y;
    }
    
    do{
        fpb--;
    } 
    while((x % fpb != 0) || (y % fpb != 0));

    printf("%d \n", fpb);
    
    int iX, iY;
    iX = x / fpb;
    printf("%d ", iX);
    iY = y / fpb;
    printf("%d", iY);
    
    return 0;
}