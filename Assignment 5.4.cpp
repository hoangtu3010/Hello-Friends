#include<stdio.h>

int isPrimeNumber(int n){
	
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0){
		return 0;
		}
	}
	return 1;
}
int main(){
	int i, n;
	printf("nhap n= ");
	scanf("%d", &n);
	printf("Cac so nguyen to nho hon %d la: \n", n);
	
	if(n >= 2){
		printf("%d ", 2);
	}
	for(i = 3; i < n; i += 2){
		if(isPrimeNumber(i) == 1){
			printf("%d ", i);
		}
	}
}
