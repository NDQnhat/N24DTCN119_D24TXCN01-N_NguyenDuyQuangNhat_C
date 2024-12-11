#include <stdio.h>
int main() {
	int c;
	float f;
	printf("nhap vao nhiet do theo do Celsius: %c", c);
	scanf("%d", &c);
	f=((float)c)*1.8+32;
	printf("nhiet do theo Fahrenheit la: %f", f);
	return 0;
} 
