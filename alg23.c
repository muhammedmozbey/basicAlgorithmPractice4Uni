#include <stdio.h>

int main() {
    int count = 0, n = 1;

    while(n <= 500) {
        count += n;
        n++;
    }
    printf("%d", count);
}