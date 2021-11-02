#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    
    int nomer[6], nechetnie=0;
    printf("Vashe tsifri: \n");

    for(int i = 0; i<=5; i++){
        scanf("%d", &nomer[i]);
    }

    for(int i = 0; i<=5; i++){
        
        if(nomer[i]%2==1){ 
            printf("Tsifri[%d] = %d\n", i, nomer[i]);
            nechetnie++;

        }

    }

    printf("kolichestvo nechetnih: %d\n", nechetnie);
    

    return 0;
}