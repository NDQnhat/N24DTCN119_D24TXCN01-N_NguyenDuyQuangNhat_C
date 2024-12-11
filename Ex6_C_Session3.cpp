#include <stdio.h>
int main() {
	float a,h;
	printf("nhap do dqi canh tam giac: ");
	scanf("%f", &a);
	printf("nhap chieu cao tam giac: ");
	scanf("%f", &h);
	printf("dien tich tam giac tren la: %.2f", 1/2.0*a*h);
	return 0;
}
