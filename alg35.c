#include <stdio.h>

int main() {
    int n;
    printf("Enter 4 digits number ");
    scanf("%d", &n);

    int d1 = (n - (n % 1000)) / 1000;
    int d2 = ((n % 1000) - (n % 100)) / 100;
    int d3 = ((n % 100) - (n % 10)) / 10;
    int d4 = n % 10;

    printf("d1: %d\nd2: %d\nd3: %d\nd4: %d", d1, d2, d3, d4);
}