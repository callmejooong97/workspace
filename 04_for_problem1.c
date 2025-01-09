#include <stdio.h>

//1~100까지 더하기 

int main(){
    int total=0;  //덧셈결과를 저장할 변수

    for(int i=1;i<=100;i++){
        // total=total+i;
        total +=i; 
        if(total>30){
            break; //  누적합이 30보다 크면 반복 중단!
        }
    }
    printf("1~100까지 합은%d",total);    
}  //총100번 반복할거고 i는 1씩 증가하겠구나