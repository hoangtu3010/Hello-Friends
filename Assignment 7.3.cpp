#include <stdio.h>
int main (){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int a[n], x;
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &x);
		if(i == 0)
			a[i] = x;
		else{
			for(int j = 0; j < i; j++){
				if(x == a[j]){
					printf(" %d da co trong mang \n", x);
					i--;
				}
				else{
					a[i] = x;
				}
			}
		}
	}
}
