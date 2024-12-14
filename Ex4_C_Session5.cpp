#include<stdio.h>
int main() {
	int n,product;
	printf("nhap so nguywn duong tu 1 toi 10: ");
	scanf("%d", &n);
	for(int i=1;i<=10;i++) {
		product=n*i;
		printf("%d*%d=%d\n", n, i, product);
	} return 0;
}
