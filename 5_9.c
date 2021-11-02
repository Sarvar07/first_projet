#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    
    int nomer[6], chetnie=0;
    printf("Vashe tsifri: \n");

    for(int i = 0; i<=5; i++){
        scanf("%d", &nomer[i]);
    }

    for(int i = 5; i>=0; i--){
        
        if(nomer[i]%2==0){ 
            printf("Tsifri[%d] = %d\n", i, nomer[i]);
            chetnie++;

        }

    }

    printf("kolichestvo chetnih: %d\n", chetnie);
    

    return 0;
}