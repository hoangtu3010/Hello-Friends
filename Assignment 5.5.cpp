#include<stdio.h>

int main(){
	int a, b;
	printf("nhap a= ");
	scanf("%d", &a);
	printf("nhap b= ");
	scanf("%d", &b);
	
	if(a < b){
		for(int i = a; i <= b; i++){
			int j, c = 1;
			for(j = 2; j <= i; j++){
				if(i % j == 0){
					c--;
				}
			}
			if(c == 0){
				printf("\nso nguyen to >=%d va <=%d la: %d", a, b, i);
			}
		}
	}else{
		printf("nhap sai");
	}
}
