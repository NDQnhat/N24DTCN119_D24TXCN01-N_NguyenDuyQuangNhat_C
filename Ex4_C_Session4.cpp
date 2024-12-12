#include  <stdio.h> 
int main() {
	int month;
	printf("nhap thang: ");
	scanf("%d", &month);
	if(month<1 ||month>12) {
		printf("thnag khong hop le");
	} else {
		switch(month) {
			case 1:case 3:case 5:case 7:case 8: case 10:case 12:
				printf("thang co 31 ngay");
				break;
			case 2: 
				printf("thang co 28 hoac 29 ngay");
				break;
			case 4:case 6:case 9:case 11:
				printf("thang co 30 ngay");
				break;
		}
	} return 0;
}
