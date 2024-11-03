#include <stdio.h>

int main() {
    int n = 0;

    for(int i = 0; i <= 100; i+=2) {
        n += i;
    }

    int count = 0;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            count += i;
        }
    }

    if(count == n) {
        printf("%d equals to %d amazing number!\n", n, count);
    }
    else {
        printf("%d not equals to %d not an amazing number!\n", n, count);
    }
    
}