#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c,sum,num;
	for(int i=100;i<1000;i++) {
		num=i;
		a=num/100;
		b=(num%100)/10;
		c=num%10;
		if(num==pow(a,3)+pow(b,3)+pow(c,3)) {
			printf("%d, ",num);
		}
	} return 0;
} 
