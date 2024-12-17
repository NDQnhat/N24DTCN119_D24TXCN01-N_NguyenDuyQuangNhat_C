#include <stdio.h>
int main() {
	int day,month,answer;
	printf("nhsp vao ngay sinh: ");
	scanf("%d", &day);
	printf("nhapp voo thnag sinh: ");
	scanf("%d", &month);
	switch(month) {
		case 1:
			if(day>=20&& day<=31) {
				printf("CHD: Bao Binh");
			} else if(day<=19 &&day>=1) {
				printf("CHD: Ma Ket");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 2:
			if(day>=1 && day<=18) {
				printf("CHD: Bao Binh");
			} else if(day>=19 && day<=29) {
				printf("CHD: Song Ngu");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 3:
			if(day>=1&&day<=20) {
				printf("CHD: Song Ngu");
			} else if(day >=20&& day<=31){
				printf("CHD: CHD: BAch Duong");
			}else { 
			printf("Ngay k hop le");
			} break;
		case 4:
			if(day>=1 &&day<=20) {
				printf("CHD: Bcah Duong");
			} else if(day>=21&&day<=30) {
				printf("CHD: Kim Nguu");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 5:
			if(day>=1 && day<=20){
				printf("CHD: Kim Nguu");
			} else if(day>=21&&day<=31) {
				printf("CHD: SONg Tu");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 6:
			if(day>=1 &&day<=21) {
				printf("CHD: Song Tu");
			}else  if(day >=22 &&day<=30) {
				printf("CHD: CU Giai");
			} else{
				printf("ngay k hop le");
			} break;
		case 7:
			if(day>=1 &&day<=22) {
				printf("CHD: Cu Giai");
			} else if(day >=23&&day<=31) {
				printf("CHD: Su Tu");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 8:
			if(day>=1 && day<=22){
				printf("CHD: SU Tu");
			}else if(day>=23&&day<=31){
				printf("CHD Xu Nu");
			}else { 
			printf("Ngay k hop le");
			} break;
		case 9:
			if(day>=1&&day<=22){
				printf("CHD Xu Nu");
			} else if(day>=23&&day<=30){
				printf("CHD: Thien Binh");
			}else { 
			printf("Ngay k hop le");
			} break;
		case 10:
			if(day>=1&&day<=23){
				printf("CHD: Thien Binh");
			} else if(day>=24&& day<=31){
				printf("CHD: Bo Cap");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 11:
			if(day>=1 && day <=22){
				printf("CHD: Bo Cap");
			} else if(day>=23&&day<=30){
				printf("CHD: Nhan Ma");
			} else { 
			printf("Ngay k hop le");
			} break;
		case 12:
			if(day>=1&&day<= 21) {
				printf("CHD: Nhan Ma");
			} else if(day>=22&&day <= 31){
				printf("CHD: Ma Ket");
			} else { 
			printf("Ngay k hop le");
			} break;
		default:
			printf("thang khonog hop le");
			break;
	} return 0;
}
