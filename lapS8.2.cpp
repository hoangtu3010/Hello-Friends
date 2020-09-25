#include<stdio.h>

int NghichDao(int n){
	int b = 0;
		for( ; n != 0; n /= 10){
		b = b * 10 + n % 10;
	}
	return b;
}

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	printf("So nghich dao la: %d", NghichDao(n));
}
