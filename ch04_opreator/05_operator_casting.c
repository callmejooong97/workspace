#include <stdio.h>

/*
형 변환 (Casting)
1. 프로모션(small type → big type)
    ex) int 값 → double 값 (일반적으로 자동으로 형 변환)
 
 <중요 강조>
2. 캐스팅(big type → small type)
    - 값의 손실이 생김(직접 코드 작성)
    - ex) 3.14 → int(3) [0.14가 사라짐]
*/

//1. 프로모션
int main() { 
    double res;
    res = 5;
    printf("%1lf\n",res);
//2. 캐스팅
    double pi=3.14;
    int a;
    a=(int)pi;  //값의 손실이 일어남을 알지만 이렇게 해다오
    printf("%d",a);

}

