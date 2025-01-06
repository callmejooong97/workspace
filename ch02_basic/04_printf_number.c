# include <stdio.h>

// 암기
// format
// -정수 (%d) → decimal
// -실수 (%lf) → Float
// -문자 (%c) → character
// -문자열 ($s) → String

int main() { 
    //%d 위치에 10을 출력!
    printf("%d\n",10);

    printf("%.1lf\n",3.45); 
    // $lf 위치에 3.45를 소수점 첫째 자리까지 반오릶해서 출력
    
    printf("%d과 %d의 합은 %d입니다.",10,20,10+20);
}