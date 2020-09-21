#include<stdio.h>

int main(){
	int a, b;
	printf("nhap a= ");
	scanf("%d", &a);
	printf("nhap b= ");
	scanf("%d", &b);
	
	int c;
	while((c = (a % b)) != 0){
		a = b;
		b = c;
	}
	printf("uoc chung lon nhat la: %d", b);
}
