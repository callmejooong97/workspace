// 재귀함수와 for문의 차이 (중간고사에 안나옴))
// - 재귀함수는 코드를 반복실행하는 것처럼 보이지만 실제로는 새로운 함수를 실행하는 것과 동일
// - 재귀함수는 최초 호출했던 곳이 아닌 이전에 해출했던 재귀함수로 돌아감 3 → 2 → 1 → 2 → 3 (한번에 꺼지는 것이 아니라 스택별로 사라짐)

#include <stdio.h>

void fruit(int count);

void fruit(int count){
    printf("apple\n");
    if(count==3){
        return;
    }
    fruit(count+1);  //재귀함수
    printf("jam");
}

int main(){
    fruit(1);
}