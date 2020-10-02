#include<stdio.h>

typedef struct LaiSuat{
	float CapitalSum;
	float RateOfInterest;
	int NumberOfYear;
}LS;

int main(){
	LS x;
	printf("Enter Capital Sum: ");
	scanf("%f", &x.CapitalSum);
	printf("Enter Rate Of Interest: ");
	scanf("%f", &x.RateOfInterest);
	printf("Enter Number Of Year: ");
	scanf("%d", &x.NumberOfYear);
	
	float Interest;
	for(int i = 0; i < x.NumberOfYear; i++){
		Interest = x.CapitalSum * x.RateOfInterest / 100;
		x.CapitalSum += Interest;
	}
	printf("Year: %d \n", x.NumberOfYear); 
	printf("Interest: %f\n", Interest);
	printf("Sum: %f", x.CapitalSum);
}
