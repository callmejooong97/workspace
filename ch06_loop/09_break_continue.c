#include <stdio.h>


/**
 * Break:즉시 반복문을 빠져나가세요.(반복문 X)*
 * Continue: 즉시 다음 반복으로 넘어가세요.*/

int main(){
    for(int i=1;i<=10;i++) {
        printf("%d\n",i);
        if(i%2==0){
            continue;
        }
        if(i==5){
            break;
        }
    }









}