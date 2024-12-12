#include <stdio.h>
int main() {
	int num;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d", &num);
	if(num>0) {
		printf("day la so nguyen duong");
	} else {
		if(num<0) {
			printf("day la so nguyen am");
		}
	} return 0;
} 
