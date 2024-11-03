#include <stdio.h>

int main() {
    int r; 
    float c, a;
    printf("Enter a number ");
    scanf("%d", &r);

    c = 3.14 * r * r;
    a = 3.14 * 2 * r;

    printf("Circumference: %.2f\nArea: %.2f", c, a);
}