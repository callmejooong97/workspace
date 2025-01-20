/**
 * 파일 입출력(File I/O)
 * - fopen():파일열기
 *     1)r(read):읽기
 *          ㄴa.txt 내용을 가져오기
 *     2)w(write):파일내용쓰기
 *          ㄴa.txt를 저장하기 
 *          ㄴ 내용을 수정
 *     3)a(append):파일내용추가
 *          ㄴ 기존내용을 안건드리고 맨하단에 내용을 추가
 * - fopen(): 실제파일이 있는 장치와 연결되는 스트림파일을 메모리에 생성
 * ※ 버퍼: 임시 메모리 공간(속도조절)
 * - fclose():파일닫기
 * - file pointer를 사용
 * 
 * - putchar()와 printf()의 차이
 * * 1. putchar()
 *  - 한글자만 출력 
 *  - 출력하는 문자는 반드시 char 또는 ASCII값으로 표현
 *  - 간단한 문자 출력에 적합
 *  2.printf()
 *  - 형식화 된 문자열을 출력
 *  - ㄴ%d,%s,%c → 형식지정자
 *  - 형식지정자를 사용해서 여러데이터 형식 출력 가능
 *  - 출력실패시 음수로 반환
 *  - putchar()에 비해 무거움 */
 

#include <stdio.h>

void main(){
    FILE *fp;  // 파일 포인터 선언
    int ch;

    fp=fopen("abc.txt","r");
    
    //예외처리
    // 예외가 발생했을 때 대처하는 방법
    // C언어는 예외처리(High-level) 기술이 없음
    // 반드시 예외처리가 필요한 경우(file,DB 사용)

    if(fp==NULL){
        printf("파일이 열리지 않았습니다\n");
        return;
    }
    printf("파일이 열렸습니다.\n");
    
    //fp주소로 가서 문자를 하나씩 읽어 (ASCII로 반환;그래서 문자 타입이 int)
    //반환하는 역할
    while(1){
        ch=fgetc(fp);
        // EOF=End Of File(ASCII코드)
        if(ch==EOF){
            break;
        }
        //입력한 문자 화면에 출력
        putchar(ch);
    }
    fclose(fp);
}
