#include <stdio.h>
int main() {
	float math, literature, eng;
	printf("nhap lan luot diem toan, van, anh:");
	scanf("%f%f%f", &math, &literature, &eng);
	printf("tong diem 3 mon la: %.2f", math+literature+eng);
	printf("trung binh 3 mon la: %.2f", (math+literature+eng)/3);
	return 0;
}
