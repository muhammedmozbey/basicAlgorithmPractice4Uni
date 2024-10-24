#include <stdio.h>

int main () {
    int a, b;

    printf("Enter 2 number ");
    scanf("%d %d", &a, &b);

    a = a * a;
    b = b * b;

    printf("a: %d\nb: %d", a, b);
}