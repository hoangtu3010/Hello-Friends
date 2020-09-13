#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, d;
	printf("nhap a=");
	scanf("%d", &a);
	printf("nhap b=");
	scanf("%d", &b);
	
	if(a >= b){		
		c = a/b;
		printf("ket qua cua a/b = %f ", c);
	}else if(a <= b){
		d = a*b;
		printf("ket qua cua a*b = %f", d);
	}
	
}
