#include <stdio.h>
int main() {
	int day, month;
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thnag sinh: ");
    scanf("%d", &month);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
    	printf("Ngay hoac thnag k hop le\n");
        return 1;
    } if (day >= 20 && month < 12) {
    	month++;
        day=1;
    } else if (day >= 22 && month == 12) {
        month= 1;
        day=1;
    } switch (month) {
        case 1:  printf("CHD: Ma KEt"); break;
        case 2:  printf("CHD: Bao bInh"); break;
        case 3:  printf("CHD: Song Ngu"); break;
        case 4:  printf("CHD: Bach Duogn"); break;
        case 5:  printf("CHD: Kim Nguu"); break;
        case 6:  printf("CHD: Song Tu"); break;
        case 7:  printf("CHD: Cu Giai"); break;
        case 8:  printf("CHD: SUTu"); break;
        case 9:  printf("CHD: Xu Nu"); break;
        case 10: printf("CHD: Thien Binh"); break;
        case 11: printf("CHD: Bo Cap"); break;
        case 12: printf("CHD: Nhna Ma"); break;
    } return 0;
}
