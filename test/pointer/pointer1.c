#include <stdio.h>

// 문자열 저장 방법
// 1. 배열
// - char arr[5] = "KOREA";
// 2. 포인터
// - char *p = "KOREA";

int main() {
    char *p = "KOREA";      // p라는 포인터 변수는 "KOREA"라는 문자열을 가리킴. 이때 p는 문자열의 첫 글자인 'K'의 주소
    printf("%s \n", p);     // p가 가리키는 전체 문자열 "KOREA"를 출력
    printf("%s \n", p+3);   // p의 주소에서 3만큼 더한 위치, 즉 "KOREA"에서 4번째 글자 "E"부터 시작해서 출력
    printf("%c \n", *p);    // p가 가리키는 위치의 문자, 즉 "K"를 출력
    printf("%c \n", *(p+3));// p에서 3만큼 더한 위치의 문자, 즉 "E"를 출력
    printf("%c ", *p+2);    // p가 가리키는 문자 "K"의 아스키코드 값에 2를 더한 결과 출력 ==> M출력 / A=65
}