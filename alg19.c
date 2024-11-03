#include <stdio.h>

// 1 + 2 + 4 + 7 + 14 = 28

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    int count = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            count+=i;
        }
    }
    if (count == n) {
        printf("Amazing number!\n");
    }
    else {
        printf("Not an amazing number!\n");
    }

}