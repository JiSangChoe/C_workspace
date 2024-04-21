#include <stdio.h>
void main() {
    char ch, str[] = "12345000";
    int i, j;

    for (i=0; i<8; i++){
        ch = str[i];
        if (ch=='0')
            break;
    }

    for (j=0; j<i; j++) {
        i--;
        ch = str[j];
        str[j] = str[i];
        str[i] = ch;
    }

    printf("%s", str);
}