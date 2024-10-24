#include <stdio.h>

int main () {
    int by, cy = 2024;

    printf("Enter your birthyear ");
    scanf("%d", &by);

    printf("You're %d years old!\n", (cy - by));
}