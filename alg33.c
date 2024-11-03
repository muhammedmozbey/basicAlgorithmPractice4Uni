#include <stdio.h>


int main() {
    int x, n;
    printf("Enter a number ");
    scanf("%d", n);
    x = n;

    int p1 = n % 100;
    int p2 = n / 100;

    int sum = (p1 + p2) * (p1 + p2);

    if(sum == x) {
        printf("OG");
    }
    else {
        prinf("not OG");
    }
}