#include <stdio.h>

// 재귀함수
// 함수 내부에서 자기 자신을 다시 호출하는 함수. 아래 코드에서는 f(n)은 n과 f(n-1)의 곱으로 정의 되어 있음
// 재귀 함수를 풀 때는, 종료조건까지 함수를 나열했다가 거꾸로 값을 계산하면서 최초 함수까지 올라오면됨
int f(int n) {
    if(n<=1) return 1;
    else return n*f(n-1);
}

int main() {
    printf("%d", f(7));
}