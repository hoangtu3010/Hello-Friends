#include<stdio.h>

int main(){
	int n, b = 0;
	printf("nhap so: ");
	scanf("%d", &n);
	
	for(int a = 1; a <= n; a++){
		b += a;
	}
	printf("S = %d", b);
}
