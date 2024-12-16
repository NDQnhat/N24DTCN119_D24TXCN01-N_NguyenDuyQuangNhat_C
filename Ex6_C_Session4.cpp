#include <stdio.h>
int main() {
	int a,b,soDien;
	printf("nhap vao chi so cu: ");
	scanf("%d", &a);
	printf("nhap vao chi so moi: ");
	scanf("%d", &b);
	soDien=b-a;
	if(soDien>0 &&soDien<=50) {
		printf("tien dien tieu thu trong thang la: %d", soDien*10000);
	} if(soDien>50 &&soDien<=100) {
		printf("tien dien tieu thu trong thang la: %d", 50*10000+(soDien-50)*15000);
	} if(soDien>100 && soDien<=150) {
		printf("tien dien tieu thu trong thang la: %d", 50*10000+50*15000+(soDien-100)*20000);
	} if(soDien>150&&soDien<=200) {
		printf("tien dien tieu thu trong thang la: %d", 50*10000+50*15000+50*20000+(soDien-150)*25000);
	} if(soDien>200) {
		printf("tien dien tieu thu trong thang la: %d", 50*10000+50*15000+50*20000+50*25000+(soDien-200)*30000);
	} return 0;
}
