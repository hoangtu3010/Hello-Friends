#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("nhap a=");
	scanf("%d", &a);
	printf("nhap b=");
	scanf("%d", &b);
	
	if(a >= b){
		c = a/b;
		printf("ket qua cua a/b = %d ", c);
	}else if(a <= b){
		d = a*b;
		printf("ket qua cua a*b = %d", d);
	}
	
}
