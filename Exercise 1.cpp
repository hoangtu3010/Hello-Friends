#include<stdio.h>

int main(){
	int Fn, F0 = 0, F1 = 1;
	
	printf("Fibonacci series between 1 and 100: ");
	for ( int i = 0 ; i < 100 ; i++ ){  
    	if ( i <= 1 ){
    		Fn = i;
		}else{
        	Fn = F0 + F1;
        	F0 = F1;
        	F1 = Fn;
        	if(Fn > 100){
            	break;
        	}
    	}
      printf("%d  ", Fn);
    }
}
