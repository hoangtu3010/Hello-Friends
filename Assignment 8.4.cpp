#include<stdio.h>
#include<math.h>

float DienTichTamGiac(float p, float S, float a, float b, float c){
	float d = (a + b + c) / 2; 
	float e = sqrt(d * (d - a) * (d - b) * (d - c));
	return d, e;
}

int main(){
	int a, b, c, p, S;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	printf("Nhap c= ");
	scanf("%d", &c);
	printf("\nDien tich cua tam giac la: %f", DienTichTamGiac(p, S, a, b, c ));
}
