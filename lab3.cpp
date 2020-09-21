#include<stdio.h>

int main(){
	int n;
	printf("nhap n= ");
	scanf("%d", &n);
	
	int ary[n];
	for(int i = 0; i < n; i++){
		printf("\nnhap phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	int x;
	printf("\nnhap x= ");
	scanf("\n%d", &x);
	for(int i = 0; i < n; i++){
		if(x == ary[i]){
			printf("\n%d co trong mang", x);
		}
	}
	printf("\nkhong co trong mang");
}
