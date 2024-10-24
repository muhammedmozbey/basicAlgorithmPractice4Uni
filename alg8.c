#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter 2 numbers ");
    scanf("%d %d", &n1, &n2);

    for(int i = 0; n1 >= n2; i++) {
        n1 -= n2;
    }
    printf("remainder: %d", n1);
}