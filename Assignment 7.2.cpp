#include<stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	int x;
	printf("Nhap x= ");
	scanf("%d", &x);
	
	int i = 0, near;
	if(x != a[i]){
		for(; i < n; i++){
			if(a[i] < x){
				near = a[i];
			}
		}
		printf("Tiem can duoi cua %d la: %d", x, near);
	}else
	printf("%d khong co tiem can", x);
}
