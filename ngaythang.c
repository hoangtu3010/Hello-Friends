#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, x;
	printf("nhap ngay:");
	scanf("%d", &a);
	printf("nhap thang:");
	scanf("%d", &b);
	
	if(b > 0 && b < 13){
		if((b == 1||b == 3||b == 5||b == 7||b == 8||b == 10||b == 12)){
			if(a > 0 && a < 32){
				if(b == 1){
					c = a;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 3){
					c = a + 31 + 28;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 5){
					c = a + 31 + 28 + 31 + 30;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 7){
					c = a + 31 + 28 + 31 + 30 + 31 + 30;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 8){
					c = a + 31 + 28 + 31 + 30 + 31 + 30 + 31;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 10){
					c = a + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 12){
					c = a + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}
			}else
			printf("day khong phai ngay trong nam");
		}else if(b == 4||b == 6||b == 9||b == 11){
			if(a > 0 && a < 31){
				if(b == 4){
					c = a + 31 + 28 + 31;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 6){
					c = a + 31 + 28 + 31 + 30 + 31;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 9){
					c = a + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}else if(b == 11){
					c = a + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
					printf("day la ngay thu %d va nam khong nhuan", c);
				}
			}else
			printf("day khong phai ngay trong nam");
		}else if(b == 2){
			c = a + 31;
			printf("day la ngay thu %d va nam khong nhuan", c);
		}
		if(c % 7 == 0){
			printf("\nday la chu nhat");
		}if(c % 7 == 1){
			printf("\nday la thu 2");
		}if(c % 7 == 2){
			printf("\nday la thu 3");
		}if(c % 7 == 3){
			printf("\nday la thu 4");
		}if(c % 7 == 4){
			printf("\nday la thu 5");
		}if(c % 7 == 5){
			printf("\nday la thu 6");
		}if(c % 7 == 6){
			printf("\nday la thu 7");
		}
	}else
	printf("day khong phai thang trong nam");
	
}

