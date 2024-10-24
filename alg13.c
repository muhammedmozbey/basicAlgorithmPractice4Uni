#include <stdio.h>

int main() {
    int n, negative = 0, even = 1, equal = 0, c = 0;

    while(c < 5) {
        printf("Enter a number ");
        scanf("%d", &n);

        if(n < 0) {
            negative += n;
        }
        else if(n % 2 == 0) {
            even *= n;
        }
        else if(n == 7) {
            equal += 1;
        }
        c += 1;
    }
    printf("negative's sum: %d\n", negative);
    printf("even's product: %d\n", even);
    printf("number of entered seven: %d\n", equal);
}