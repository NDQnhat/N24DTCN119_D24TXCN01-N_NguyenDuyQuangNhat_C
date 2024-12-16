#include <stdio.h>
int main() {
	int a,b,ucln,max;
	printf("nhap 2 so nguyen duogn: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>b) {
		max=b;
	} else {
		max=a;
	} for(int i=max;i>0;i--) {
		if(a%i==0&&b%i==0) {
			ucln=i;
			break;
		}
	} printf("uoc chung lno naht cua 2 so: %d", ucln);
	return 0;
}
