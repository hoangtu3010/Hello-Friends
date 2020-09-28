#include<stdio.h>

int Tong(int n){
	int c, s = 0;
	for( ;n != 0; ){
        c = n % 10;
        s += c;
        n /= 10;
    }
    return s;
}

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	printf("Tong cac so cua %d la: %d", n, Tong(n));
}
