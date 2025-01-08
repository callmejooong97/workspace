#include <stdio.h>
#include <stdio.h>

int main() {
    //0~100점을 입력받고, 학점으로 변환해서 출력하는 프로그램
    
    // 1.입력부
    int score;
    char grade;
    // 91~100:A, 81~90:B, 71~80:C, 61~70:D, 0~60:F
    
    //점수 입력받기
    printf("점수: ");
    scanf("%d", &score);
    // +유효성 체크: 사용자가 입력한 값이 유효한지 체크 (필수)
    //1. 정수형 숫자인지 체크
    //2. 0~100 사이의 값인지 범위 체크

    //2.제어부
    if(score <= 100 && score >= 91) {
        grade = 'A';
    }
    else if(score <= 90 && score >= 81) {
        grade = 'B';
    }
    else if(score <= 80 && score >= 71) {
        grade = 'C';
    }
    else if(score <= 70 && score >= 61) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 3.출력부
    printf("당신의 점수는 %d점으로 %c학점 이십니다.", score, grade);
    
    return 0;
}
