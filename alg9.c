#include <stdio.h>

int main() {
    int n, i = 0;
    printf("Enter a number ");
    scanf("%d", &n);

    for(i = 0; n != 0; i++) {
        n /= 10;
    }
    printf("number of digits: %d", i);
}