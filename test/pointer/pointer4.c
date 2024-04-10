#include <stdio.h>
#include <stdlib.h>

char n[30];

// 사용자로부터 이름을 받아 그 이름을 다시 돌려주는 역할
char* getName() {
    printf("입력하세요 : ");

    // 사용자의 입력을 받아 'n'이라는 배열에 저장하는 일을 함
    gets(n);
    // 'n'배열에 저장된 값을 함수를 호출한 곳으로 돌려주는 역할
    return n;
}

int main() {
    // tes1, test2, test3 이라는 포인터 변수를 선언
    char * test1;
    char * test2;
    char * test3;

    // 'getName'함수를 호출해 사용자로부터 입력받은 이름을 tes1, test2, test3이 가리키게 함
    // 이 변수들은 전부 같은 포인터(같은 메모리 주소)를 바라보고 있음
    // 즉, 마지막으로 그 메모리 주소에 수정한 내용으로 tes1, test2, test3도 보이게 될 것
    test1 = getName();
    test2 = getName();
    test3 = getName();

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s", test3);
}