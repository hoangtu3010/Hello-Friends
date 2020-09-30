#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	printf("Nhap chuoi: ");
	scanf("%s", s);
	int u = 0, e = 0, o = 0, a = 0, i = 0, x = 0;
	for(int j = 0; j < strlen(s); j++){
		if(s[j] == 'a' || s[j] == 'A') a++;
		else if(s[j] == 'u' || s[j] == 'U') u++;
		else if(s[j] == 'e' || s[j] == 'E') e++;
		else if(s[j] == 'o' || s[j] == 'O') o++;
		else if(s[j] == 'i' || s[j] == 'I') i++;
		else x++;
	}
	printf("A|a: %d\n", a);
	printf("U|u: %d\n", u);
	printf("E|e: %d\n", e);
	printf("O|o: %d\n", o);
	printf("I|i: %d\n", i);
	printf("So luong ki tu khac la: %d", x);
}
