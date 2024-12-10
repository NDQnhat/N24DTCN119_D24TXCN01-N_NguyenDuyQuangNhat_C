#include <stdio.h>
int main() {
	const float PI=3.14;
	int R;
	printf("ban kinh hinh tron: ");
	scanf("%d", &R);
	printf("chu vi hinh tron: %f \n", 2*PI*R);
	printf("dien tich honh tron: %f", PI*(R*R));
	return 0; 
} 
