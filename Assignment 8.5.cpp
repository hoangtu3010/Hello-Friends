#include<stdio.h>

int UCLN(int a, int b){
	while(a != b){
		if(a > b)
		a -= b;
		else
		b -= a;
	}
	return a;
}

int main(){
	int a, b;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat la: %d", UCLN(a, b));
}
