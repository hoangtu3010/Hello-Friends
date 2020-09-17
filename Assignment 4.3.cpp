#include<stdio.h>

int main(){
	int s = 0;
	
	int i = 0;
	while(i < 200){
		if(i % 2 != 0){
			s += i;
		}
		i++;
	}
	printf("tong = %d", s);
}
