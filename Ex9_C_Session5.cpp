#include <stdio.h>
int main() {
	int choose,x=0,y=0,z=0;
	while(1) {
		printf("MENU\n");
		printf("1.Nhap 3 so\n");
		printf("2.Tong 3 so\n");
		printf("3.Trung binh cogn 3 sso\n");
		printf("4.So nho nhat\n");
		printf("5.SO lon nhat\n");
		printf("6.Thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d", &choose);
		switch(choose) {
			case 1:
				scanf("%d", &x);
				scanf("%d", &y);
				scanf("%d", &z);
				break;
			case 2:
				printf("tong 3 so la: %d\n", x+y+z);
				break;
			case 3:
				printf("trung binh cong 3 so: %.2f\n", ((float)x+(float)y+(float)z)/3.0);
				break;
			case 5:
				if(x>y&&x>z) {
					printf("so lon nhat la: %d\n", x);
				} else if(y>x&&y>z) {
					printf("so lon nhat la: %d\n", y);
				} else {
					printf("so lon nhat la: %d\n", z);
				} break;
			case 4:
				if(x<y&&x<z) {
					printf("so nho nhat la: %d\n", x);
				} else if(y<x&&y<z) {
					printf("so nho nhat la: %d\n", y);
				} else {
					printf("so nho nhat la: %d\n", z);
				} break;
			case 6:
				return 0;
		}
	} return 0;
}
