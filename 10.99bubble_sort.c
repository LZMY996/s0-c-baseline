#include <stdio.h>
#define SIZE 5
int main(void){
    int a[SIZE] = {9,5,7,2,3};
    int i,j,t;
    for (i = SIZE - 1; i >= 0; i--){
        for (j = 0; j < i; j++){
            if (a[j] > a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        for (int c = 0; c < SIZE; c++){
            printf("%d",a[c]);
        }
        printf("\n");
    }
    return 0;
}