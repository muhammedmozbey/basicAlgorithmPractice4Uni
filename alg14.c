#include <stdio.h>

int main() {
    int i = 1, j = 1;

    while(i != 10) {
        while(j != 10) {
            printf("%d ", i*j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;    
    }

}