#include <stdio.h>
int main() {
	int num, sum;
	printf("nhap so nguyen co 4 chu so: ");
	scanf("%d", &num);
	sum=(num/1000)+((num/100)%10)+((num/10)%10)+(num%10);
	printf("tong cac chu so da nhap la: %d", sum);
	return 0;
}
