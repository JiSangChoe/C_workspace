#include <stdio.h>

// len 함수를 위한 함수 선언
// len 함수는 문자열의 길이를 반환하는 함수, 문자열 char* 포인터로 전달
int len(char*p);

int main() {

    // 두개의 문자열 p1과 p2를 선언하고 할당
    char* p1 = "2022";
    char* p2 = "202207";

    // len 함수를 호출하고 각 문자열의 길이를 계산하고, 그 결과를 변수 a와 b에 저장
    int a = len(p1);
    int b = len(p2);

    // a = 4, b = 6 => 10이 출력
    printf("%d", a+b);
}

int len(char*p) {
    
    // 문자열의 길이를 저장할 변수 r을 0으로 할당
    int r = 0;

    // *p가 널 문자가 아닐 때까지 반복. *p는 포인터 p가 가리키는 문자
    while (*p !='\0') {
        // 포인터 p를 다음 문자로 이동시키고
        p++;
        // 길이 카운터 r을 1증가
        r++;
    }
    // 계산된 문자열 길이 r을 반환
    return r;
}