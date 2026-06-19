	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	
	#define TOTAL 10
	
	int tentativas = 0;
	int repeticoesPergunta[TOTAL] = {0};
	int repeticoesNivel[3] = {0};
	
	void Quiz();
	
	typedef struct{
	    char pergunta[200];
	    char alternativas[4][100];
	    char correta;
	}Pergunta;
	
	void Quiz(){
	
		tentativas++;
	
	    Pergunta quiz[TOTAL] = {
	
	        {
	            "Qual foi a primeira capital do Brasil?",
	            {"Salvador","Brasilia","Rio de Janeiro","Sao Paulo"},
	            'A'
	        },
	
	        {
	            "Qual a raiz cubica de 343?",
	            {"27","343","9","7"},
	            'D'
	        },
	
	        {
	            "Qual o maior planeta do Sistema Solar?",
	            {"Terra","Marte","Jupiter","Saturno"},
	            'C'
	        },
	
	        {
	            "Em que continente fica o Egito?",
	            {"Asia","Africa","Europa","Oceania"},
	            'B'
	        },
	
	        {
	            "Qual o elemento quimico representado pelo simbolo O?",
	            {"Ouro","Osmio","Oxigenio","Hidrogenio"},
	            'C'
	        },
	
	        {
	            "Quem pintou a Mona Lisa?",
	            {"Van Gogh","Picasso","Michelangelo","Leonardo da Vinci"},
	            'D'
	        },
	
	        {
	            "Qual oceano banha a costa leste do Brasil?",
	            {"Indico","Pacifico","Artico","Atlantico"},
	            'D'
	        },
	
	        {
	            "Quantos lados possui um hexagono?",
	            {"5","6","7","8"},
	            'B'
	        },
	
	        {
	            "Qual destes animais eh um mamifero?",
	            {"Tubarao","Pinguim","Golfinho","Tartaruga"},
	            'C'
	        },
	
	        {
	            "Qual eh o menor numero primo?",
	            {"0","1","2","3"},
	            'C'
	        }
	
	    };
	
	    char resposta;
	    int acertos = 0;
	    int i;
	
	    printf("\n==============================\n");
	    printf("       NIVEIS DO QUIZ\n");
	    printf("==============================\n");
	
	   for(i = 0; i < TOTAL; i++)
{
    if(i == 0)
    {
        printf("\n========== NIVEL 1 ==========\n");
    }
    else if(i == 3)
    {
        printf("\nParabens! Voce concluiu o nivel 1!\n");
        printf("========== NIVEL 2 ==========\n");
    }
    else if(i == 6)
    {
        printf("\nParabens! Voce concluiu o nivel 2!\n");
        printf("========== NIVEL 3 ==========\n");
    }

    printf("\nPergunta %d\n", i + 1);
    printf("%s\n", quiz[i].pergunta);

    printf("A) %s\n", quiz[i].alternativas[0]);
    printf("B) %s\n", quiz[i].alternativas[1]);
    printf("C) %s\n", quiz[i].alternativas[2]);
    printf("D) %s\n", quiz[i].alternativas[3]);

    printf("\nResposta: ");
    scanf(" %c", &resposta);

    resposta = toupper(resposta);

    if(resposta == quiz[i].correta)
    {
        printf("Resposta correta!\n");
        acertos++;
    }
    else
    {
        printf("\nResposta incorreta! Putz, que deslize.\n");
        printf("A resposta correta era %c.\n", quiz[i].correta);

        printf("\nVoce perdeu o desafio!\n");
        printf("Acertos: %d de %d\n", acertos, TOTAL);
        printf("Porcentagem: %.0f%%\n", (acertos * 100.0) / TOTAL);

        repeticoesPergunta[i]++;

        if(i <= 2)
            repeticoesNivel[0]++;
        else if(i <= 5)
            repeticoesNivel[1]++;
        else
            repeticoesNivel[2]++;

        return;
    }
}
		
	    printf("\n=================================\n");
	    printf("MEUS PARABENS!\nVoce concluiu todos os niveis com sucesso!\n");
	    printf("Acredito que ate Albert Einstein teria inveja da sua inteligencia haha!\n");
	    printf("=================================\n");
	
	    printf("Acertos: %d de %d\n",acertos,TOTAL);
	    printf("Porcentagem: %.0f%%\n",(acertos*100.0)/TOTAL);
	    printf("Tentativas realizadas: %d\n", tentativas);
	
	}
	
	
	int main(){
	
	    int opcao;
	
	    do{
	
	        system("cls");
	
	        printf("=========== MENU ===========\n");
	        printf("1 - Instrucoes\n");
	        printf("2 - Jogar\n");
	        printf("3 - Sair\n");
	        printf("============================\n");
	
	        printf("Escolha: ");
	        scanf("%d",&opcao);
	
	        switch(opcao){
	
	            case 1:
	                system("cls");
	
	                printf("=========== INSTRUCOES ===========\n");
	                printf("Responda as perguntas corretamente.\n");
	                printf("Cada acerto libera o proximo desafio.\n");
	                printf("Se errar uma pergunta, o jogo termina.\n");
	                printf("Lembrando que voce pode sempre tentar de novo.\n");
	                printf("Boa sorte!\n");
	
	                system("pause");
	                break;
	
	            case 2:
	                system("cls");
	
	                Quiz();
	
	                system("pause");
	                break;
	
	            case 3:
	                printf("\nEncerrando o programa...\n");
	                break;
	
	            default:
	                printf("\nOpcao invalida!\n");
	                system("pause");
	        }
	
	    }while(opcao!=3);
	
	    return 0;
	}
