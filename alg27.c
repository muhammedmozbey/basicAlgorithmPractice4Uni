#include <stdio.h>
#include <math.h>

int main() {
    int n, decimal = 0, count = 0;
    printf("Enter a binary number ");
    scanf("%d", &n);

    while(n != 0) {
        decimal += (n % 10) * (pow(2, count));
        n /= 10;
        count++;
    }

    printf("%d", decimal);
}