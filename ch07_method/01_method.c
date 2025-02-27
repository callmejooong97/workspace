#include <stdio.h>

/**
 * 함수(method,function)
 * - 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합)
 * - 기능을 수행하는 코드 단위
 * - 반복적인 작업을 피하기 위해 사용
 * - 코드 (10줄 작성) → 함수호출 → 스케줄링 → 보고서
 * - main(),pritnf(),scanf()..
 * - ()를 사용하고 카멜케이스 사용!
 * 
 * C언어 함수 사용방법
 * 1. 함수 정의: 함수를 코드로 구현
 * 2. 함수 호출: 정의된 함수를 사용하기 위해 호출
 * 3. 함수 선언: 프로그램 상단에 어떤 함수를 사용하는지 컴파일러에게 
 *              정보를 전달해주는 역할
 * 
 * 함수의 종류
 * 1. C언어에서 기본적으로 제공하는 함수 → 내장함수(built in function)
 * 2. 외장함수(library): 외부에서 개발해 놓은 코드 모음
 * 3. 사용자 정의 함수 : 직접개발해서 사용
 * 
 * 함수의 문법 (암기! 강조!)
 * 1. 데이터 반환 타입 함수명(매개변수1,매개변수2,...){
 *          실행문;
 *          return 반환값;
 * }
 * 
 * ex) 
 * 
 * int sum(int a, int b){
 *     total=a+b;
 *     return total;
 * }
 * 
 * 함수 종료
 * 1. return을 만나면 종료
 * 2. }을 만나서 더이상 실행할 코드가 없는 경우 종료
 * 
 * 
 * 함수의 키워드
 * 1. 매개변수(parameter,argument) : 함수의 입력 값, 여러개 사용가능(,로 구분함)
 *       ㄴ 매개변수가 없는 함수도 존재 가능
 * 
 * 2. return: 기본적으로 함수 종료를 의미
 *      ㄴ 함수종료=함수를 호출했던 곳으로 돌아감
 *      ㄴ return 반환값; → 호출했던 곳으로 돌아가면서 반환값을 가지고 감.
 *      ㄴ return과 반환값 모두 생략 가능! 
 * 
 * 3. 매개변수,데이터 반환타입이든 생략가능 "void" 사용
 * - 매개변수,데이터반환타입을 사용하지 않겠다는 의미
 *          void sum(void){
 *              printf("hello");
 *              }
*/
#include <stdio.h>
    //3. 함수 선언
    // - 컴파일러에게 함수를 사용하겠다고 선언 
int sum(int x, int y);
   
    //1.함수 정의
int sum(int x,int y){
    int temp;
    temp=x+y;
    return temp;
    }

int main(){
    int a=10 , b=5;
    int result;

    //2.함수호출
    result= sum(a,b);
    printf("반환값: %d",result);

    }