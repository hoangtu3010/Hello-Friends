#include<stdio.h>

int main(){
    int a;
	printf("nhap so nguyen:");
	scanf("%d", &a);
	
	if(a == 2){
		printf("day la thu hai");
	}else if(a == 3){
		printf("day la thu ba");
	}else if(a == 4){
		printf("day la thu tu");
	}else if(a == 5){
		printf("day la thu nam");
	}else if(a == 6){
		printf("day la thu sau");
	}else if(a == 7){
		printf("day la thu bay");
	}else if(a == 8){
		printf("day la chu nhat");
	}else 
		printf("khong phai ngay trong tuan");
}
