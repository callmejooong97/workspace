#include <stdio.h>

// 별찍기
int main(){
    for(int i=0; i<=5;i++){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");

    }

    printf("#######################\n");
    
    for(int i=5; i>=1;i--){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }


}