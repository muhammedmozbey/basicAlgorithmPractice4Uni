#include <stdio.h>

int main() {
    int n1, n2, i = 0;
    printf("Enter 2 numbers ");
    scanf("%d %d", &n1, &n2);

    for(i = 0; n1 >= n2; i++) {
        n1 -= n2;
    }
    printf("result: %d", i); 
}
