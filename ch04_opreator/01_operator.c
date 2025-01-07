#include <stdio.h>

int main() {
    int a, b, sum, sub, mul, inv; // 변수 선언
    a = 10;
    b = 20;
    sum = a + b;  // 더하기 연산(+)
    sub = a - b;  // 빼기 연산(-)
    mul = a * b;  // 곱하기 연산(*)
    inv = -a;     // 음수 연산(-)

    double apple;
    int banana;
    int orange;
    apple = 5.0 / 2.0;  // 2.5
    banana = 5 / 2;     // 몫(2)
    orange = 5 % 2;     // 나머지(1)

    printf("%.1lf\n", apple);   // 소수 첫째 자리까지 출력
    printf("%d\n", banana);     // 몫 출력
    printf("%d\n", orange);     // 나머지 출력

    return 0;
}

// <암기>
// 복합대입연산자
// -=,*=,+=,/=,%=
// a= a+20 ; → a+=20
// a= a*20;  → a*=20

