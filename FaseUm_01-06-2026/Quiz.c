#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char resposta;
	

	printf("===== QUIZ =====");
	//1
	printf("\n1 - Qual foi a primeira capital do Brasil?\n");
	printf("\na) Salvador\n");
	printf("b) Brasilia\n");
	printf("c) Rio de Janeiro\n");
	printf("d) Sao Paulo\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'a'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	//2
	printf("\n2 - Qual a raiz cubica de 343?\n");
	printf("\na) 27\n");
	printf("b) 343\n");
	printf("c) 9\n");
	printf("d) 7\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'd'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	//3
	printf("\n3 - Qual o maior planeta do Sistema Solar?\n");
	printf("\na) Terra\n");
	printf("b) Marte\n");
	printf("c) Jupiter\n");
	printf("d) Saturno\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'c'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
  //4
  	printf("\n4 - Em que continente fica o Egito?\n");
	printf("\na) Asia\n");
	printf("b) Africa\n");
	printf("c) Eurapa\n");
	printf("d) Oceania\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'b'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
  
	//5
	printf("\n5 - Qual o elemento quimico representado pelo simbolo 'O'?\n");
	printf("\na) Ouro\n");
	printf("b) Osmio\n");
	printf("c) Oxigenio\n");
	printf("d) Hidrogenio\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'c'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
  	//6
  	printf("\n6 - Quem pintou a obra Mona Lisa?\n");
	printf("\na) Vicent Van Gogh\n");
	printf("b) Pablo Picasso\n");
	printf("c) Michelangelo\n");
	printf("d) Leonardo da Vinci\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'd'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	//7
	printf("\n7 - Qual eh o oceano que banha a costa leste do Brasil?\n");
	printf("\na) Oceano Indico\n");
	printf("b) Oceano Pacifico\n");
	printf("c) Oceano Artico\n");
	printf("d) Oceano Atlantico\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'd'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
  
  //8
    printf("\n8 - Quantos lados tem um hexagono?\n");
	printf("\na) 5\n");
	printf("b) 6\n");
	printf("c) 7\n");
	printf("d) 8\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'b'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	//9
	printf("\n9 - Qual destes animais eh um mamifero?\n");
	printf("\na) Tubarao\n");
	printf("b) Pinguim\n");
	printf("c) Golfinho\n");
	printf("d) Tartaruga\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'c'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	//10
	 printf("\n10 - Qual e o menor numero primo?\n");
	printf("\na) 0\n");
	printf("b) 1\n");
	printf("c) 2\n");
	printf("d) 3\n");

	printf("\nInsira sua resposta: ");
	scanf(" %c", &resposta);

	if(resposta == 'c'){
    	printf("Resposta correta!\n");
	}
	else{
    	printf("Resposta errada!\n");
	}
	
	system("pause");
  
  return 0;
}
