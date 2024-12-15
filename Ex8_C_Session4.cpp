#include <stdio.h>
int main() {
	int a,b,c;
	printf("nhap vao 3 canh taam giiav: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a<b+c &&b<a+c&& c<a+b) {
		printf("la 3 canh tam giav");
	} else {
		printf("khong phai 3 canhtam giac");
	} return 0;
}
