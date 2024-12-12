#include <stdio.h>
int main() {
	int num;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d", &num);
	if(num%2==0) {
		printf("day la so chan");
	} else {
		printf("day la so le");
	} return 0;
} 
