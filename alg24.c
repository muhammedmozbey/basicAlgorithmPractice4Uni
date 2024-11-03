#include <stdio.h>

int main() {
    int u, v;
    printf("Enter 2 numbers ");
    scanf("%d %d", &u, &v);

    if(u > 50 && v > 50) {
        printf("%d\n", u + v);
    }
    else {
        printf("Invalid numbers!(both must be greater than 50)\n");
    }
}