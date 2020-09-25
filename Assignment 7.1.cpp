#include<stdio.h>

int main(){
	int a[2][3];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Ma tran vua nhap la: \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 1; i < 2; i++){
		for(int j = 0; j < i; j++){
			int c = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = c;
		}
	}
	
	printf("Ma tran chuyen vi cua ma tran la: \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
