#include <stdio.h>
 
int even_odd(int x);
int up_bellow_zero(int x);

int main() {
 
	int N, x;
	
	scanf("%d", &N);
	
	while(N != 0){
		
		scanf("%d", &x);
		
		if(x == 0)
			printf("NULL\n");
		
		else		
			printf("%s %s\n", even_odd(x) ? "EVEN" : "ODD", up_bellow_zero(x) ? "POSITIVE" : "NEGATIVE");
		
		N--;
    }
 
    return 0;
}

int even_odd(int x){
	
	if((x % 2) == 0)
		return 1;	
	
	return 0;
}

int up_bellow_zero(int x){
	if(x > 0)
		return 1;
	
	return 0;
}