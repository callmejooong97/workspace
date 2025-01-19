#include <stdio.h>

// 구구단 2~9단 출력
// 반복문1개 : i:2~9단
// 반복문1개: 단(i*1~i*9)
// 강조강조!!!꼭 해보세요

int main(){
    for(int i=2;i <=9 ; i++){  //2단인지,3단인지 정함. (단수 결정)
        for(int j=1;j <=9 ; j++){  //x1~x9까지 출력
        printf("%dx%d=%d\n",i,j,i*j);
    }
    }
}