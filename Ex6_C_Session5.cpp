#include <stdio.h>
int main() {
	int stt,x,y;
	printf("nhap so thu nhat: ");
	scanf("%d", &x);
	printf("nhap so thu 2: ");
	scanf("%d", &y);
	while(1) {
		printf("CALCULATOR\n");
		printf("1. Tong hai so\n");
		printf("2. Hieu hai so\n");
		printf("3. Tcih hai so\n");
		printf("4. Thuong hai so\n");
		printf("5. Thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d", &stt);
		switch(stt) {
			case 1:
				printf("tong hai so la: %d\n", x+y);
				break;
			case 2:
				printf("hieu hai so la: %d\n", x-y);
				break;
			case 3:
				printf("tich hai so la: %d\n", x*y);
				break;
			case 4:
				printf("thuong hai so la: %d\n", x/y);
				break;
			case 5:
				return 0;
		}
	} return 0;
}
