# include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    while(n % 5 == 0){
        n/=5;
    }
    if(n == 1) {
        printf("true");
    }
    else {
        printf("false");
    }
}
