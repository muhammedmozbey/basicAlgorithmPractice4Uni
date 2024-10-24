#include <stdio.h>

int multiplication(int n1, int n2);

int main() {
    int n1, n2;

    printf("Enter 2 numbers ");
    scanf("%d %d", &n1, &n2);

    int result = multiplication(n1, n2);
    printf("result: %d", result);
}

int multiplication(int n1, int n2) {

    if (n2 == 1) {
        return n1; 
    }
    else {
        return n1 += multiplication(n1, n2 - 1);
    }
}