#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int MudaDirecao(int dist[],int mudancadirecao);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int trocoudirecao,distancia[100],i,totalpercorrido=0,teclapressionada;
	do{
		printf("***Valores de 1 a 100***\n\n");
		do{
			printf("Quantas vezes Joãozinho fez troca de posição? ");
			scanf("%i",&trocoudirecao);
			system("cls");
		}while((trocoudirecao<0)||(trocoudirecao>100));
		if(trocoudirecao>0){
			for(i=0;i<=trocoudirecao;i++){
				distancia[i]=mudadirecao(distancia,i);
					totalpercorrido+=distancia[i];
			}
			system("cls");
			if(totalpercorrido>=0)
				printf("Foi percorrido um total de %i metros para a DIREITA.",totalpercorrido);
			else
				printf("Foi percorrido um total de %i metros para a ESQUERDA.",-totalpercorrido);
			printf("\n\n\nSe você deseja executar o programa novamente aperte 'Enter'\nCaso contrário pressione qualquer tecla.");
					teclapressionada=getch();
						system("cls");
		}else
			printf("Programa encerrado.");
		
	}while(teclapressionada==13);
	return 0;
	
}

int MudaDirecao(int dist[],int mudancadirecao){
	if(mudancadirecao%2==0){
		printf("%i° distância pecorrida (Direita): ",mudancadirecao+1);
		 	scanf("%i",&dist[mudancadirecao]);
	}else{
		printf("%i° distância pecorrida (Esquerda): ",mudancadirecao+1);
			scanf("%i",&dist[mudancadirecao]);
				dist[mudancadirecao]*=-1;
	}
	return dist[mudancadirecao];
}
