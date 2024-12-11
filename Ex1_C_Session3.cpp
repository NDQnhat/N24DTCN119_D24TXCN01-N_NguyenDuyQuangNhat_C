#include <stdio.h>
int main() {
	char name[100];
	int i=0;
	printf("nhap ten cua ban: ");
	while(i<100){
		char a= getchar();
		if(a=='\n') {
			break;
		} name[i++]=a;
	} name[i]='\0';
	printf("xin chao %s", name);
	return 0;
}
