//so le cuoi cung cua mang
#include<stdio.h>

int main(){
	int n;
	printf("nhap n= ");
	scanf("%d", &n);
	
	int ary[n];
	for(int i = 0; i < n; i++){
		printf("nhap phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	int l;
	for(int i = 0; i <= n; i++){
		if(ary[i] % 2 != 0){
			l = ary[i];
		}
	}
	printf("\nso le la: %d", l);
}
