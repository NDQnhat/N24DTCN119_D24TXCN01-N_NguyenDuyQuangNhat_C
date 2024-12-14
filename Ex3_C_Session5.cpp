#include <stdio.h>
int main() {
	int n,sum=0;
	printf("nhap so n nguyen duogn ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		sum+=i;
	} printf("tong tu 1 den %d la: %d", n, sum);
	return 0;
} 
