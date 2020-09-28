#include<stdio.h>

int BCNN(int a, int b){
	int c, d, s = 0;
	if(a > b){
		c = d = a;
	}else
		c = d = b;
	while(true){
		if(c % a == 0 && c % b == 0){
			s = c;
			break;
		}
		c += d;
	}
	return c;
}

int main(){
	int a, b;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	printf("Boi chung nho nhat la: %d", BCNN(a, b));
}
