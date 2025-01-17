//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 
// 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int score;
char grade;

int main(){
    printf("니 성적: ");
    scanf("%d",score);
    
    if (100>=score>90){
        printf("당신의 성적은 A입니다");
    }
    else if (90>=score>80){
        printf("당신의 성적은 B입니다");
    }
    else if (80>=score>70){
        printf("당신의 성적은 C입니다");  
    }
    else printf("너 F야");
}