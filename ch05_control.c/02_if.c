#include <stdio.h>

/*
* if문의 기본문법
if(조건){
실행문;
}else if(조건){  //chaining 
}실행문;
}else if(조건){
}실행문;
}else{
실행문;
}

- if()로 시작
- if와 else는 1번만 사용 가능, else if 반복 사용가능
- if와 else if의 조건이 참이면 해당 블록문이 실행
- if(조건) 시작해서 아래로 실행
    ㄴ조건이 거짓이면 다음 else if()로 실행
    ㄴ조건이 참이면 블록문 실행 후 빠져나감
- else는 모든 조건을 만족하지 못하는 경우 실행

- if문 조합
1. if()
2. if()~else
3. if()~elseif()

*/int main() {
    int a = 2;

    // 첫 번째 조건문
    if (a > 20) {
        printf("a는 20보다 크다.");
    } else {
        printf("a는 20보다 작다.");
    }

    // 두 번째 조건문
    if (a > 10) {
        printf("a는 10보다 크다.\n");
    } else if (a > 5) {
        printf("a는 5보다 크다.\n");
    } else if (a > 1) {
        printf("1");
    }
}
int main() {
    int a = 10;

    if (a > 10) {
    }
    if (a > 5) {
    }
    if (a > 1) {
    }
}

// 각각 실행됨