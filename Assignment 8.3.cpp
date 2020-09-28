#include<stdio.h>

int ChuViTamGiac(int a, int b, int c){
	if(a + b > c && a + c > b && b + c > a){
		int C = a + b + c;
		return C;
	}
}

int main(){
	int a, b, c;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	printf("Nhap c= ");
	scanf("%d", &c);
	if(a + b > c && a + c > b && b + c > a){
		printf("\nChu vi cua tam giac la: %d", ChuViTamGiac(a, b, c));
	}else
	printf("\nKhong phai 3 canh cua tam giac");
}
