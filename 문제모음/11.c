#include <stdio.h>
// 반복 중첩문에서는 서로다른 변수를 사용해줘야함. i,j,k
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