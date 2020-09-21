#include<stdio.h>

int main(){
	int n, a;
	printf("nhap n= ");
	scanf("%d", &n);
	
	int s = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%2d", i);
			s += i;// s += 1
		}
	}
	printf("\ntong cac uoc cua %d la: %d", n, s);
}
