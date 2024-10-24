#include <stdio.h>

int main() {
    int c;
    float e, o;

    while (c != 5) {
        int n;
        printf("Enter a number ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            e += n;
        }
        else {
            o += n;
        }
        c += 1;
    }
    printf("%.2f", e/o);
}