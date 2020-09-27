#include<stdio.h>

int ChuViTamGiac(int a, int b, int c){
	int C = a + b + c;
	return C;
}

int main(){
	int a, b, c;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	printf("Nhap c= ");
	scanf("%d", &c);
	printf("\nChu vi cua tam giac la: %d", ChuViTamGiac(a, b, c));
}
