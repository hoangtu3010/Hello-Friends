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
	float T = 0, TB, count = 0;
	for(int i = 0; i <= n; i++){
		if(ary[i] % 2 != 0){
			l = ary[i];
			count++;
			T += l;
			TB = T / count;
			printf("\nCac so le la: %d", l);
		}
	}
	printf("\nTong cac so le la: %f", T);
	printf("\nTrung binh cong cac so le la: %f", TB);
}
