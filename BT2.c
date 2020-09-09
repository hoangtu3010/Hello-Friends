#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, delta, x, x1, x2;
	printf("nhap a=");
	scanf("%f", &a);
	printf("nhap b=");
	scanf("%f", &b);
	printf("nhap c=");
	scanf("%f", &c);
	
	if(a==0){
		if(b==0 && c!=0){
			printf("phuong trinh vo nghiem\n");
		}else if(b==0 && c==0){
			printf("phuong trinh co vo so nghiem\n");
		}else{
			x = -c/b;
			printf("phuong trinh co nghiem = %f", x);}	
		}else{
			delta = b*b-a*c*4;
		if(delta<0){
			printf("phuong trinh vo nghiem");
		}else if(delta==0){
			x1 = -b/(2*a);
			printf("phuong trinh co nghiem kep x = %f", x1);
		}else{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("x1 = %f\nx2 = %f", x1, x2);
		}
	}
	return 0;
}
