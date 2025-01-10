#include <stdio.h>

//do~while은 while을 변형한 반복문
//반복 전에 무조건 1회 실행해야하는 경우 사용
//일단 반복할 문장을 수행한 후 조건을 검사

int main() {
    int a=1;
    do{
        a=a*2;
    }while(a<10);
}