#include <stdio.h>

  // 시험에나온대요
  
/* 
 * 삼항/조건 연산자(Conditional Operator)
 - 세개의 항을 사용하는 연산자
 - (조건)? 값1: 값2
    ㄴ 조건이 true면 값1 선택
    ㄴ 조건이 false면 값2 선택
*/

int main(){
    int a=10,b=20,res;

    res= (a>b ? a:b);
    printf("큰 값:%d\n",res);
    
}