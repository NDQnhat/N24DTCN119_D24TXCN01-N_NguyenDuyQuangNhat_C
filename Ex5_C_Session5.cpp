#include <stdio.h>
int main() {
	int n=1,product=1;
	while(n<10) {
		printf("bang cuu chuong %d\n", n);
		for(int i=1;i<=10;i++) {
			product=i*n;
			printf("%d*%d=%d\n", n, i, product);
		} n++ ;
	} return 0;
}
