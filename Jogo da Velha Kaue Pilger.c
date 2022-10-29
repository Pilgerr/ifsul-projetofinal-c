#include <stdio.h>
#include <stdlib.h>

void tabuleiro (char matriz2[3][3]){
	
	printf (" %c  |  %c  |  %c \n" , matriz2[0][0], matriz2[0][1], matriz2[0][2]);
	printf ("____|_____|_____\n");
	printf (" %c  |  %c  |  %c \n" , matriz2[1][0], matriz2[1][1], matriz2[1][2]);
	printf ("____|_____|_____\n");
	printf (" %c  |  %c  |  %c \n" , matriz2[2][0], matriz2[2][1], matriz2[2][2]);
	printf ("    |     |  \n");
}

int main (){
	
	int l, c, ls, cs, ls2, cs2, op;
	
	char matriz[3][3] ={ {'-', '-', '-'},
						 {'-', '-', '-'},
						 {'-', '-', '-'}, };
						
						 
printf("\n\n\n\n___________________________________________________________________________>>> Jogo Da Velha <<<________________________________________________________________________ \n\n");
printf("\n\n\n                                                                       ________________________________                                                                  ");
printf("                                                                     |                                |                                                                        ");
printf("                                                              | Escolha uma das opcoes de jogo:|                                                                        ");
printf("                                                              |________________________________|                                                                   \n\n\n");

printf("\n\n\n_________________________________________________________________________>>> (1) Dois Jogadores <<<_____________________________________________________________________ ");	
printf("\n\n\n____________________________________________________________________>>> (2) Um jogador (VS computador) <<<______________________________________________________________ \n\n");	

printf("\n\n\n                                                                       ________________________________                                                                  ");
printf("                                                                     |                                |                                                                        ");
printf("                                                              | Digite uma das opcoes de jogo: |                                                                        ");
printf("                                                              |________________________________|                                                                  ");

scanf ("%d", &op);
printf("\n\n\n\n\n\n______________________________________________________________________Programado_por_('Kaue', &Pilger);_________________________________________________________________ \n\n\n\n\n");
	
	switch (op){
		case 1:
			
	printf (" L0 C0  |  L0 C1  |  L0 C2 \n" );
	printf ("________|_________|_________\n");
	printf (" L1 C0  |  L1 C1  |  L1 C2 \n" );
	printf ("________|_________|_________\n");
	printf (" L2 C0  |  L2 C1  |  L2 C2 \n" );
	printf ("        |         |     \n\n\n\n");
	printf ("L == Linha \n\n");
	printf ("C == Coluna \n");
	
				for (l=0;l<3;l++){
				for (c=0;c<3;c++){
 
	
	printf ("\n\n\n\n\n                Jogador 1: Digite um uma linha e uma coluna: \n\n\n");
	printf ("Linha: ");
	scanf ("%d", &ls);
	printf ("Coluna: ");
	scanf ("%d", &cs);
	printf ("\n\n\n                Jogador 2: Digite um uma linha e uma coluna: \n\n\n");
	printf ("Linha: ");
	scanf ("%d", &ls2);
	printf ("Coluna: ");
	scanf ("%d", &cs2);
	printf ("\n\n\n");

	if (ls < 3 && cs < 3 && matriz[ls][cs] != 'O'){
		matriz[ls][cs] = 'X';
	}	
	
	if (matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X' ||
		matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X' ||
		matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X' ||
		matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X' ||
		matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X' ||
		matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X' ||
		matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X' ||
		matriz[2][0] == 'X' && matriz[1][1] == 'X' && matriz[0][2] == 'X'){
	
	printf ("\n\n\n                Parabens jogador 1! Voce ganhou :) \n\n\n");
	goto ponto; 
	
	}
	
	if (matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O' ||
		matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O' ||
		matriz[2][0] == 'O' && matriz[2][1] == 'O' && matriz[2][2] == 'O' ||
		matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O' ||
		matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[2][1] == 'O' ||
		matriz[0][2] == 'O' && matriz[1][2] == 'O' && matriz[2][2] == 'O' ||
		matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O' ||
		matriz[2][0] == 'O' && matriz[1][1] == 'O' && matriz[0][2] == 'O'){
	
	printf ("\n\n\n                Parabens jogador 2! Voce ganhou :) \n\n\n"); 
	goto ponto; 
	}

	if (ls2 < 3 && cs2 < 3 && matriz[ls2][cs2] != 'X'){
		matriz[ls2][cs2] = 'O';
	}	
	
	tabuleiro (matriz);
	
	}	
	}
		break;
		case 2:
				for (l=0;l<3;l++){
				for (c=0;c<3;c++){
	
	printf ("\n\n\n\n\n                Jogador 1: Digite um uma linha e uma coluna: \n\n\n");
	printf ("Linha: ");
	scanf ("%d", &ls);
	printf ("Coluna: ");
	scanf ("%d", &cs);
	printf ("\n\n\n                O computador fez sua jogada. \n\n\n");
	srand(time(NULL));
	ls2 = rand () % 3;
	cs2 = rand () % 3;

	if (ls < 3 && cs < 3 && matriz[ls][cs] != 'O'){
		matriz[ls][cs] = 'X';
	}	
	
	if (matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X' ||
		matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X' ||
		matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X' ||
		matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X' ||
		matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X' ||
		matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X' ||
		matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X' ||
		matriz[2][0] == 'X' && matriz[1][1] == 'X' && matriz[0][2] == 'X'){
	
	printf ("\n\n\n                Parabens jogador 1! Voce ganhou :) \n\n\n");
	goto ponto; 
	}
	
	if (matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O' ||
		matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O' ||
		matriz[2][0] == 'O' && matriz[2][1] == 'O' && matriz[2][2] == 'O' ||
		matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O' ||
		matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[2][1] == 'O' ||
		matriz[0][2] == 'O' && matriz[1][2] == 'O' && matriz[2][2] == 'O' ||
		matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O' ||
		matriz[2][0] == 'O' && matriz[1][1] == 'O' && matriz[0][2] == 'O'){
	
	printf ("\n\n\n                Voce perdeu :( \n\n\n"); 
	goto ponto; 
	}

	if (ls2 < 3 && cs2 < 3 && matriz[ls2][cs2] != 'X'){
		matriz[ls2][cs2] = 'O';
	}	
	
	tabuleiro (matriz);
	
	}	
	}
		break;
		default:
				printf ("\n\n\n    Digite uma opcao valida! \n\n\n");
	}
	ponto:
	return(0);
}
