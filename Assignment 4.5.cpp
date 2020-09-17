#include<stdio.h>

int main(){
	int n;
	printf("nhap mot so: ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("\n%d khong phai so nguyen to", n);
		return 0;
	}
	int s = 0;
	for(int i = 2; i <= (n - 1); i++){
		if(n % i == 0){
			s++;
		}
	}
	if(s == 0){
		printf("\n%d la so nguyen to", n);
	}else{
		printf("\n%d khong phai la so nguyen to", n);
	}
}
