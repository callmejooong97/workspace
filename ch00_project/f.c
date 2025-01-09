#include <stdio.h>

/**
 * 기말고사는 이정도 난이도로 출제 예정
 * 피보나치 수열 코드 개발
 * - 피보나치 수열이란, 첫째 및 둘째항이 1이며 그 뒤의 모든 항은 
 * 바로 앞 두항의 합인 수열
 * 1 1 2 3 5 8 13 ... */
#include <stdio.h>

int main() {
    int a = 1, b = 1, fib;

    printf("%d %d ", a, b);  // 첫 번째와 두 번째 값 출력
    // 1 1 2
    while(1){
        fib=a+b;  //2
        a=b;
        b=fib;
        printf("%d",fib);
        if(fib>13){
            break;
        }
    }
}