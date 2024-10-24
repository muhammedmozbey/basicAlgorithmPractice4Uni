#include <stdio.h>

int factorial (int n);

int main () {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("result: %d", result);
}


int factorial (int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}