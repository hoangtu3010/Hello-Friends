#include<stdio.h>

int main(){
	int n;
	printf("nhap n= ");
	scanf("%d", &n);
	
	int a[n];
	for(int i = 0; i < n; i++){
		printf("nhap so thu %d: ", i);
		scanf("%d", &a[i]);
	}
	
	int d;
	for(int i = 0; i < n; i++ ){
		if(a[i] > 0){
			d = a[i];
			break;
		}
	}
	
	if(d <= 0){
		printf("\nkhong co so duong");
	}else{
		for(int i = 0; i < n; i++){
			if(a[i] > 0 && a[i] < d){
				d = a[i];
			}
		}
		printf("\n%d la so duong nho nhat", d);
	}
}
