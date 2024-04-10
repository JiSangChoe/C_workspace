#include <stdio.h>

// 이 문제 정렬문제인걸 알게 되면 오름차순인지, 내림차순인지만 정확하게 파악하고 순서대로 출력하면됨

void main() {
    int i, j;
    int temp;
    int a[5] = {75,95,85,100,50};

    for(i=0; i<4; i++) {
        for(j=0; j<4-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0; i<5; i++) {
        printf("%d ", a[i]);
    }
}