#include <stdio.h>
int main() {
	int x,y;
	printf("nhap x:");
	scanf("%d", &x);
	printf("nhap y:");
	scanf("%d", &y);
	int sum=x+y, difference=x-y, product=x*y, quotient=x/y;
	printf("tong cua hai so la: %d \n",sum);
	printf("hieu cua hai so la: %d \n",difference);
	printf("tich cua hai so la: %d \n",product);
	printf("thuong cua hai so la: %d \n",quotient);
	return 0;
}
