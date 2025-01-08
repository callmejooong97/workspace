#include <stdio.h>
#include <string.h>  // strcpy를 사용하기 위해 필요한 헤더

int main() {
    // 1. 입력부
    int height;
    int weight;

    printf("your height(cm): ");
    scanf("%d", &height);

    printf("your weight(kg): ");
    scanf("%d", &weight);

    // 데이터 전처리
    double height_m = (double)height / 100;  // cm를 m로 변환
    
    // 2. 제어문
    // 2-1. BMI 지수 계산
    double bmiValue = weight / (height_m * height_m);  // BMI 계산식 수정
    printf("Your BMI: %.2lf\n", bmiValue);
    
    // 2-2. BMI 구간
    char bmiClass[20];
    if (bmiValue < 18.5) {
        strcpy(bmiClass, "저체중");
    } else if (bmiValue < 23) {
        strcpy(bmiClass, "정상");
    } else if (bmiValue < 25) {
        strcpy(bmiClass, "과체중");
    } else {
        strcpy(bmiClass, "비만");
    }

    printf("Your BMI classification: %s\n", bmiClass);  // 출력
}
