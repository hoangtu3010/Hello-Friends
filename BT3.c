#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, p, C, S;
	printf("canh a=");
	scanf("%f", &a);
	printf("canh b=");
	scanf("%f", &b);
	printf("canh c=");
	scanf("%f", &c);
	
	if(a + b > c){
		if(a + c > b){
			if(b + c > a){
				printf("a, b, c la ba canh cua tam giac");
				C = a + b + c;
				p = C / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				printf("\nchu vi tam giac = %f", C);
				printf("\ndien tich tam giac = %f", S);
			}else("a, b, c khong phai la ba canh cua tam giac");
		}else("a, b, c khong phai la ba canh cua tam giac");
	}else("a, b, c khong phai la ba canh cua tam giac");
}
