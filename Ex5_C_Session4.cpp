#include <stdio.h>
int main() {
	int x,y,z;
	printf("nhap vao 3 so nguyen: ");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	if(z>x && z<y) {
		printf("so thu 3 nam giau 2 so dau");
	} else {
		printf("so thu 3 k nam giua 2 so dau");
	} return 0;
}
