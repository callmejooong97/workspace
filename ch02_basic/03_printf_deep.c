# include <stdio.h>
// 지수표현법 (시험에 안나옴!!!)
// - x10을 e로 표현
// -0.0000314 = 3.14e-5,

#include <stdio.h>

int main() {
    // long float (소수점 표현)
    printf("%.1lf \n", 1e6); // 1000000.0

    // 소수점 7번째까지 표현
    printf("%.7lf \n", 3.14e-5); // 0.0000314

    // 지수 표현
    printf("%le \n", 0.0000314); // 3.140000e-05
}
