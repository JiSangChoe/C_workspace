#include <stdio.h>

// 아래 코드는 주어진 수의 소인수 중에서 가장 큰 소수를 찾는 프로그램입니다.
// isPrime() 함수는 주어진 수가 소수인지를 판별하는 함수입니다. 이 함수는 2부터 해당 수의 이전 값까지 모든 수에 대해 나누어 떨어지는지를 확인하여 소수 여부를 판단합니다. 소수일 경우 1을 반환하고, 그렇지 않을 경우 0을 반환합니다.
// main() 함수에서는 주어진 수의 소인수를 탐색하고, 그 중에서 가장 큰 소수를 찾습니다. 먼저 2부터 주어진 수의 이전 값까지 반복하여 각 수가 소수이면서 주어진 수를 나누어 떨어지게 하는지를 확인합니다. 이 조건을 만족하는 경우 해당 수를 가장 큰 소수로 간주하여 max_div 변수에 저장합니다.
// 마지막으로 프로그램은 가장 큰 소수인 max_div 값을 출력합니다.
// 따라서 위 코드는 주어진 수의 가장 큰 소수를 찾아 출력하는 기능을 수행합니다.

int isPrime (int number) {
    int i;
    for (i=2; i<number; i++) {
        if(number % i ==0) return 0;
    }
    return 1;
}

int main (void) {
    int number = 13195, max_div=0, i;
    for (i=2; i<number; i++)
        if (isPrime(i) == 1 && number % i == 0) max_div = i;
    printf("%d", max_div);
    return 0;
}