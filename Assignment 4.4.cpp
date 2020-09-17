#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	
	do{
	printf("canh a=");
	scanf("%d", &a);
	printf("canh b=");
	scanf("%d", &b);
	printf("canh c=");
	scanf("%d", &c);
	}while(a + b <= c || a + c <= b || b + c <= a);
	printf("\na, b, c la 3 canh cua tam giac");
	float C = a + b + c;
	float p = C / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("\nchu vi tam giac = %f", C);
	printf("\ndien tich tam giac = %f", S);
	
}
