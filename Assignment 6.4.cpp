#include<stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap so thu %d: ", i);
		scanf("%d", &a[i]);
	}
	
	int count = 0, max = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			count += a[i];
			if(count > max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	printf("\nTong so duong lien tiep nhieu nhat la: %d", max);
}
