#include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    int d1 = (n - (n % 100)) / 100;
    int d3 = n % 10;
    int d2 = ((n % 100) - d3) / 10;

    int sum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);
    
    char* result = (sum == n) ? "True" : "False";
    printf("result: %s", result);
}