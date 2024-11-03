#include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Negative number!\n");
    }
    else if(n > 0) {
        printf("Positive number!\n");
    }
    else {
        printf("Number is 0!\n");
    }
}