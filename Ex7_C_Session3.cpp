#include <stdio.h>
int main() {
	int num;
	printf("nhap so nguyen co 4 chu so: ");
	scanf("%d", &num);
	printf("tong cac chu so da nhap la: %d", (num/1000)+((num/100)%10)+((num/10)%10)+(num%10));
	return 0;
}
