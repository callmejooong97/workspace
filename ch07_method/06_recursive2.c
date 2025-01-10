//시험에 나올듯? 함수의 호출과정을 이해하면됨

#include <stdio.h>

void fruit(int count);

void fruit(int count){
    printf("apple");
    if(count==3){
        return;
    }
    fruit(count+1);  //재귀함수
}

int main(){
    fruit(1);
}