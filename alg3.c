#include <stdio.h>

int main () {
    int n = 1, sum = 0;

    while (n != 101) {
        sum += n * n * n;
        n += 1;
    }

    printf("%d", sum);
}