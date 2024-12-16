#include <stdio.h>
int main() {
	int a,b,n,bcnn;
	printf("nhap 2 so ngueyn duogn: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>b) {
		n=a;
	} else {
		n=b;
	} for(int i=n;i<=a*b;i++) {
		if(i%a==0 &&i%b==0) {
			bcnn=i;
			break;
		}
	} printf("boi chungg nho naht: %d", bcnn);
	return 0;
}
