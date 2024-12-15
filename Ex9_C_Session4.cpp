#include <stdio.h>
int main() {
	int day,month,year;
	printf("nhap nagy, thang, nam: ");
	scanf("%d", &day);
	scanf("%d", &month);
	scanf("%d", &year);
	if(year<0) {
		printf("nam khong hop le");
		return 1;
	} else {
		printf("nam hop le\n");
		switch(month) {
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				if(day>=1&&day<=31) {
					printf("thang hop le\n");
					printf("ngay hop le\n");
				} else {
					printf("thang hop le\n");
					printf("ngaay khong hop le\n");
				} break;
			case 4:case 6:case 9:case 11:
				if(day>=1 &&day<=30) {
					printf("thang hop le\n");
					printf("ngay hop le\n");
				} else {
					printf("thang hop le\n");
					printf("ngaay khong hop le\n");
				} break;
			case 2:
				if(year%4==0&&year%100!=0 ||year%100==0 && year%400==0) {
					if(day>=1 && day<=29) {
						printf("thang hop le\n");
						printf("ngaay hop le\n");
					} else {
						printf("thang hop le\n");
						printf("ngaay khong hop le\n");
					}
				} else {
					if(day>=1&& day<=28) {
						printf("thang hop le\n");
						printf("ngay hop le\n");
					}
				} break;
			default:
				printf("thang khong hop le");
				break;
		}
	} return 0; 
}	
