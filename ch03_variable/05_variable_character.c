#include <stdio.h>
#include <string.h>  // 문자열을 다룰 수 있는 헤더 파일

/**
 * <강조하셨으나 중간고사에 안나옵니다 오예>
 * char: 문자형 ex) 'A'
 * String: 문자열 ex) "ABC"
 *  - C언어는 문자열형이 존재하지 않음 → 절차지향형 
 *      ㄴ 배열+char형 → 문자열형으로 표현가능
 *  - JAVA,JavaScript,Python은 다 있음 → 객체(String)
 *  - char 배열명[문자열 길이 +1]=문자열;
 *      ㄴ ex) char abc[4]=  "ABC";
 *      ㄴ 문자열 길이 +1 이유는 문자열 끝에 '\0'(널 문자) 자동으로 추가
 *      ㄴ 배열이란 기본자료형을 여러개로 묶어서 사용하는 것
  */

int main() {
    char arr_fruit[20] = "strawberry";  //char배열 선언 민 문자열 초기화
    printf("딸기: %s\n",arr_fruit);
    
    //배열은 선언된 이후에 대입 연산자로 값 입력 불가 !
    //   ㄴ strcpy() 함수를 사용하면 가능
    //  arr_fruit = "apple";  (X)

    strcpy(arr_fruit,"apple");
    printf("%s\n",arr_fruit);

}