#include <stdio.h>

int main(){
	
	int num, maior;
	
	printf("digite um numero");
	scanf("%d", &num);
	
	maior = num;	
	
	while(num!=9999){
		if(num>maior)
		maior=num;
	printf("digite um numero");
	scanf("%d", &num);
		
	}
	printf("o maior numerp � %d ", maior);
	
	
	return 0;
}
