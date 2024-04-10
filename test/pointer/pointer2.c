#include <stdio.h>

// ★ 배열의 이름은 배열의 0번째 주소
// ary == &ary[0] 이고, {메모리 주소}
// *ary = ary[0] {값}

// 0번째에 값을 넣고 싶으면,
// *ary = 1
// ary[0] = 1
// *(ary) = 1

// *(ary+0)=1 == *(ary) =1 과 동일한 표현

int main() {

    int ary[3];
    int s = 0;
    *(ary+0) = 1;
    ary[1] = *(ary + 0) + 2;
    ary[2] = *ary + 3;
    for (int i = 0; i <3; i++){
        s = s + ary[i];
    }

    printf("%d", s);
}