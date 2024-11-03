#include <stdio.h>

/*int main() {
    int b, e, r = 1;
    printf("Enter a base and an exponent respectively ");
    scanf("%d %d", &b, &e);


    while(e > 0) {
        r *= b;
        e--;
    }
    printf("%d", r);
}
*/

int main() {
    int b, e, n;
    printf("Enter a base and an exponent respectively ");
    scanf("%d %d", &b, &e);
    n = b;
    for(int i = 1; i < e; i++) {
        b*=n;
    }
    printf("%d", b);
}