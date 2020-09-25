#include<stdio.h>

int SNT(int n){
	if(n < 2)
	return false;
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0)
		return false;
	}
	return true;
}

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	if(SNT(n)){
		printf("%d la so nguyen to", n);
	}else
	printf("%d khong phai so nguyen to", n);
}
