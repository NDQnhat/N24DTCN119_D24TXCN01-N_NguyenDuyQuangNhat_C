#include <stdio.h>
int main() {
	int num;
	printf("nhap 1 so nguyen: ");
	scanf("%d", &num);
	if(num%3==0 && num%5==0) {
		printf("so vua nhap chia het cho 3 va 5");
	} else if(num%3==0) {
		printf("so vua nhap chia het 3");
	} else if(num%5==0) {
		printf("so vua nhap choa het 5");
	} return 0;
} 
