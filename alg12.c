#include <stdio.h>


int main() {
    int c = 0;

    while(c * c <= 1000) {
        printf("%d\n", c * c);

        c += 1;
    }

}