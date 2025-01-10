#include <stdio.h>

/**
 * 실수 자료형(소수점)
 * - float(7) 소수점 7자리 까지만 넣을 수 있음,double(15),long double (15이상)
 * - 정수형 (int)을 기본으로 사용, 실수형은 꼭 필요한 경우만 사용
 * - 실수형은 double을 기본으로 사용 (차이점 나올듯)
 * - 실수형은 값의 범위보다 유효 숫자 개수(소수점 몇째자리)가 중요
 * 
 * ※ C,JAVA,Python,Javascript
 *  → 수치연산(C가 최강)
 *  → 인공지능 → 수치연산 → Python 
 *     ㄴ Python → 수치연산 → CPython
 * 
 * */

int main(){
    float ft=1.123456789123456789;
    double db=1.123456789123456789;

    // 소수점 이하 20자리까지 출력
    printf("flong형 변수값: %.20f\n",ft);
    printf("double형 변수값: %.20lf\n",db);

}

