#include <stdio.h>
int main() {
	float r;
	printf("nhap ban kinh htron:");
	scanf("%f", &r);
	printf("chu vi htron la: %.2f \n", 2*3.14*r);
	printf("dien tich htron la: %.2f \n", 3.14*r*r);
	return 0;
}
