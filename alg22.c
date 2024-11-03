#include <stdio.h>

//abundant: 1 + 2 + 3 + 4 + 6 = 16 > 12
//deficient: 1 + 2 + 5 = 8 < 10
//amazing: 1 + 2 + 4 + 7 + 14 = 28 = 28

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    int count = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            count += i;
        }
    }
    if(count > n) {
        printf("Abundant number!");
    }
    else if(count < n) {
        printf("Deficient number!");
    }
    else {
        printf("Amazing number!");
    }
}