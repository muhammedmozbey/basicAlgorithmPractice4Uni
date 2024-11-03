#include <stdio.h>
#include <math.h>


int main() {
	int n, binary = 0, count = 0;
	printf("Enter a number ");
	scanf("%d", &n);

	while(n != 0) {
		binary += (n%2)*(pow(10,count));
		n/=2;
		count++;
	}

	printf("%d", binary);
}