#include <stdio.h>

int main() {

    int number= 1234;
    int div = 10;
    int result = 0;

    while ( number > 0) {
        result = result * div;
        result = result + number % div;
        number = number / div;
    }
    printf("%d", result);
    return 0;
}

// 주어진 코드는 주어진 숫자를 자릿수별로 분리하여 거꾸로 이어붙여 새로운 숫자를 만드는 프로그램입니다. 이를 위해 나눗셈을 활용하며, 각 자리수는 오른쪽부터 차례대로 더해진 값을 결과에 추가하여 거꾸로 숫자를 만들어갑니다.
// 여기서 number는 변환할 숫자를 나타내며, div는 나눗셈에 사용될 값으로 10으로 초기화됩니다. result는 최종적으로 만들어질 숫자를 나타내며, 초기에는 0으로 설정됩니다.
// 주요한 부분은 while 루프 내부입니다:
// result = result * div;: result를 div로 곱하여 기존에 있는 값들을 왼쪽으로 한 자리씩 이동시킵니다. -> 비트연산자처럼
// result = result + number % div;: number를 div로 나눈 나머지를 result에 더합니다. 이는 number의 가장 오른쪽 자리수를 result에 추가하는 것을 의미합니다.
// number = number / div;: number를 div로 나누어서 다음 자릿수로 넘어갑니다.
// 이 과정을 반복하면서 number의 자릿수가 하나씩 result에 추가되고, number가 0이 될 때까지 이 과정이 진행됩니다.
// 최종적으로 result에는 number의 각 자릿수를 거꾸로 이어붙인 숫자가 저장됩니다.
// 이 코드는 숫자를 거꾸로 만드는 것이 주된 목적이며, 예를 들어 입력된 숫자가 1234라면 출력값은 4321이 됩니다. 이런 기능은 숫자를 역순으로 나열하고 싶은 경우에 유용하게 사용될 수 있습니다.

// 초기 상태:

// number = 1234
// div = 10
// result = 0
// while 루프 첫 번째 반복:

// number = 1234, number > 0이므로 루프 진입
// result를 div로 곱하여 왼쪽으로 한 자리씩 이동: result = 0
// number % div를 통해 number의 가장 오른쪽 자리수를 가져와 result에 더함: result = 0 + 1234 % 10 = 4
// number를 div로 나누어서 다음 자릿수로 이동: number = 123
// while 루프 두 번째 반복:

// number = 123, number > 0이므로 루프 진입
// result를 div로 곱하여 왼쪽으로 한 자리씩 이동: result = 40
// number % div를 통해 number의 가장 오른쪽 자리수를 가져와 result에 더함: result = 40 + 123 % 10 = 43
// number를 div로 나누어서 다음 자릿수로 이동: number = 12
// while 루프 세 번째 반복:

// number = 12, number > 0이므로 루프 진입
// result를 div로 곱하여 왼쪽으로 한 자리씩 이동: result = 430
// number % div를 통해 number의 가장 오른쪽 자리수를 가져와 result에 더함: result = 430 + 12 % 10 = 432
// number를 div로 나누어서 다음 자릿수로 이동: number = 1
// while 루프 네 번째 반복:

// number = 1, number > 0이므로 루프 진입
// result를 div로 곱하여 왼쪽으로 한 자리씩 이동: result = 4320
// number % div를 통해 number의 가장 오른쪽 자리수를 가져와 result에 더함: result = 4320 + 1 % 10 = 4321
// number를 div로 나누어서 다음 자릿수로 이동: number = 0
// while 루프 다섯 번째 반복:

// number = 0, number > 0이 아니므로 루프 종료
// 따라서 마지막으로 printf를 통해 출력된 값은 result인 4321입니다.