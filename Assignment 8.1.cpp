#include<stdio.h>

int SNT(int n){
	if(n < 2)
	return false;
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

void LH(int n){
	int s = n + 1;
	while(SNT(s) == false){
		s += 1;
	}
	printf("%d", s);
}

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	if(n >= 0)
	printf("So nguyen to lon hon va gan %d nhat la: ", n);
	LH(n);
}
