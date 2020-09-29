#include<stdio.h>

int main(){
	float s = 4000, ls = 0.08;
	s += s * ls;
	s += s * ls;
	s += s * ls;
	s += s * ls;
	printf("so tien nhan duoc: %f", s);
}
