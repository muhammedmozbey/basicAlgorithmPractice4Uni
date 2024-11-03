#include <stdio.h>

// Fiboacci: 0-1-1-2-3-5-8-13-21-34


int main() {
    int u = 1;
    int v = 0;
    int y = 0;
    printf("%d ", y);
    for(int i = 0; i < 9; i++) {
        y = u + v;
        printf("%d ", y);
        u = v;
        v =  y;
    }
}