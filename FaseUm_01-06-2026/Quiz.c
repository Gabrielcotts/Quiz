#include <stdio.h>

int main(){
	
	char resposta;
	
	while(resposta){
	printf("===== QUIZ =====");
	


	printf("Qual foi a primeira capital do Brasil?\n");
	printf("a) Salvador\n");
	printf("b) Brasilia\n");
	printf("c) Rio de Janeiro\n");

	scanf(" %c", &resposta);

	if(resposta == 'a'){
    	printf("Acertou!");
	}
	else{
    	printf("Errou!");
	}

	}	
}
