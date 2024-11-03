#include <stdio.h>

int main() {
    int t;
    printf("Enter time ");
    scanf("%d", &t);

    if (t < 0) {
        printf("%d", 0.00); // Invalid time
    } else if (t <= 15) {
        // Acceleration phase
        printf("%.2f", (480.0 / 15.0) * t); // Speed in km/h
    } else if (t <= 35) {
        // Constant speed phase
        printf("%2.f", 480.00); // Speed in km/h
    } else if (t <= 50) {
        // Deceleration phase
        printf("%2.f", 480.0 - (480.0 / 15.0) * (t - 35)); // Speed in km/h
    } else {
        printf("%d", 0.00); // Airplane has stopped
    }
    
}