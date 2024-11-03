#include <stdio.h>

int main() {
    int sumo = 0, sume = 0;

    for(int i = 1; i <= 500; i++) {
        if(i % 2 == 0) {
            sume+=i;
        }
        else {
            sumo+=i;
        }
    }
    printf("Sum of even numbers: %d\n", sume);
    printf("Sum of odd numbers: %d\n", sumo);
    if(sumo - sume < 0) {
        printf("Negative");
    }
    else {
        printf("Positive");
    }
}