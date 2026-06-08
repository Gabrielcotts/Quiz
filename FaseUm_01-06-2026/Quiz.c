#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TOTAL 10

typedef struct {
	char pergunta[200];
	char alternativas[4][100];
	char correta;
} Pergunta;


int Quiz() {
	Pergunta quiz[TOTAL] = {
		{
			"Qual foi a primeira capital do Brasil?",
			{"Salvador", "Brasilia", "Rio de Janeiro", "Sao Paulo"},
			'A'
		},
		{
			"Qual a raiz cubica de 343?",
			{"27", "343", "9", "7"},
			'D'
		},
		{
			"Qual o maior planeta do Sistema Solar?",
			{"Terra", "Marte", "Jupiter", "Saturno"},
			'C'
		},
		{
			"Em que continente fica o Egito?",
			{"Asia", "Africa", "Europa", "Oceania"},
			'B'
		},
		{
			"Qual o elemento quimico representado pelo simbolo 'O'?",
			{"Ouro", "Osmio", "Oxigenio", "Hidrogenio"},
			'C'
		},
		{
			"Quem pintou a obra Mona Lisa?",
			{"Vincent Van Gogh", "Pablo Picasso", "Michelangelo", "Leonardo da Vinci"},
			'D'
		},
		{
			"Qual eh o oceano que banha a costa leste do Brasil?",
			{"Oceano Indico", "Oceano Pacifico", "Oceano Artico", "Oceano Atlantico"},
			'D'
		},
		{
			"Quantos lados tem um hexagono?",
			{"5", "6", "7", "8"},
			'B'
		},
		{
			"Qual destes animais eh um mamifero?",
			{"Tubarao", "Pinguim", "Golfinho", "Tartaruga"},
			'C'
		},
		{
			"Qual e o menor numero primo?",
			{"0", "1", "2", "3"},
			'C'
		}
	};

	char resposta;
	int acertos = 0;
	int erros = 0;

	printf("===== Quiz =====\n");

	for (int i = 0; i < TOTAL; i++) {
		printf("\n%d - %s\n", i + 1, quiz[i].pergunta);
		printf("a) %s\n", quiz[i].alternativas[0]);
		printf("b) %s\n", quiz[i].alternativas[1]);
		printf("c) %s\n", quiz[i].alternativas[2]);
		printf("d) %s\n", quiz[i].alternativas[3]);

		printf("\nInsira sua resposta: ");
		scanf(" %c", &resposta);

		if (resposta == quiz[i].correta) {
			printf("Resposta correta!\n");
			acertos++;
		} else {
			printf("Resposta errada! A correta era %c.\n", quiz[i].correta);
			erros++;
		}
	}

	printf("\n===== RESULTADO FINAL =====\n");
	printf("Voce acertou %d perguntas\n", acertos);
	printf("Voce errou %d perguntas\n", erros);
	printf("Sua porcentagem de acertos eh de %.0f%%\n", (acertos * 100.0) / TOTAL);
}
