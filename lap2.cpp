#include<stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	
	int ary[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	int l;
	float T = 0, TB;
	for(int i = 0; i <= n; i++){
		if(ary[i] % 2 != 0){
			l = ary[i];
			if(i % 2 == 0){
				T += l;
				TB = T / 2;
				printf("\nCac so le o vi tri chan la: %d", ary[i]);
			}
		}
	}
	printf("\nTong cac so le o vi tri chan la: %f", T);
	printf("\nTrung binh cong cac so le o vi tri chan la: %f", TB);
}
