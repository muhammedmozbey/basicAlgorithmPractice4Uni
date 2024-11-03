#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter sides ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a == b && b == c && c == d) {
        printf("Square");
    }
    else {
        printf("Not Square");
    }
}