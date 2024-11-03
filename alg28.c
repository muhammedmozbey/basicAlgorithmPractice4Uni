#include <stdio.h>

int main() {
    int y;
    printf("Enter a year ");
    scanf("%d", &y);

    if(y % 4 == 0) {
        printf("Leap year");
    }
    else {
        printf("Not a leap year");
    }
}