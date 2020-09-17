#include<stdio.h>

int main(){
	int n;
	printf("nhap so: ");
	scanf("%d", &n);
	
	float b = 0;
	for(float a = 1; a <= n ; a++ ){
		b += 1/(float)a;
	}
	printf("S = %f", b);
}
