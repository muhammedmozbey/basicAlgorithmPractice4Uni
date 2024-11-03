#include <stdio.h>

int main() {
    int h, w;
    printf("Enter your height and weight ");
    scanf("%d %d", &h, &w);

    int r = h - 100 - w;

    if(r < 11) {
        printf("lose weight");
    }
    else if(r > 11) {
        printf("gain weight");
    }
    else {
        printf("ideal");
    }
}