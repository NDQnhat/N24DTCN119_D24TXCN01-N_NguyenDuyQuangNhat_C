#include <stdio.h>
int main() {
	int year;
	printf("nhap nam can kiem tra: ");
	scanf("%d", &year);
	if(year%4==0 &year%100!=0 ||year%100==0&& year%400==0) {
		printf("day la nam nhuuan");
	} else {
		printf("khong phia nam nhuaan");
	} return 0;
} 
