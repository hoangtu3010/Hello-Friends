#include<stdio.h>

int main(){
	int n, b = 0;
	printf("Nhap n= ");
	scanf("%d", &n);
	
	if(n != 0){
		if(n <= 9999){
			b = b * 10 + n % 10 ;
			n /= 10;
			b = b * 10 + n % 10 ;
			n /= 10;
			b = b * 10 + n % 10 ;
			n /= 10;
			b = b * 10 + n % 10 ;
			n /= 10;
			printf("So nghich dao la: %d", b);
		}else
		printf("Ban da nhap qua gioi han");
	}
}
