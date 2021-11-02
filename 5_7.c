#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    int n;

    printf("tifra: ");
    scanf("%d",&n);

    int M[n];

    for(int i = 0; i<n; i++){
        M[i] = i;
        printf("massiv[%d] = %d\n", i, M[i]);
    }

    for(int i=n-1; i>=0; i--){
        printf("\tmassiv[%d] = %d\n", i, M[i]);
    }

    return 0;
}