#include<stdio.h>

int main(){
	int n, a, b, c;
	printf("nhap n= ");
	scanf("%d", &n);
	a = 0;
	b = 1;
	c = 1;
	
	if(n < 0){
		printf("Khong co gia tri");
	}else if(n == 0){
		printf("Vi tri thu 0 la: 0");
	}else if(n == 1 || n == 2){
		printf("Vi tri thu %d la: 1", n);
	}else{
		for(int i = 3; i <= n; i++){
			a = b;
			b = c;
			c = a + b;
		}
		printf("Vi tri thu %d la: %d", n, c);
	}
}
