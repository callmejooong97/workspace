#include <stdio.h>

// 배열 길이 계산
//  - C언어는 sizeof()로 계산

// ※ 객체지향언어(JAVA,Python)
//      - 배열을 객체로 표현
//      - 기본적으로 배열이름.length→ 배열길이 
//      - 또는 len(배열이름) → 배열길이

int main(){
    int score[5];
    //sizeof(score) // int=4byte 이니까 20byte
    //sizeof(score[0])  // int값 하나를 끄집어 오니까 4byte

    int count= sizeof(score)/sizeof(score[0]);
    printf("배열길이 : %d",count);

    for(int i=0;i<count;i++){
        
    }
}