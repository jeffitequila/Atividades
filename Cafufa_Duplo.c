#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ate,n1,n2,i,ultimodigito,contador=0;
	do{
		printf("Até que número? ");
			scanf("%i",&ate);
	}while((ate<0)||(ate>1000));
	do{
		if(contador>0)
			printf("Os valores não podem ser zero.\n");
		do{
			printf("Primeiro valor: ");
				scanf("%i",&n1);
		}while((n1<0)||(n1>9));
		do{
			printf("Segundo Valor: ");
				scanf("%i",&n2);
		}while((n2<0)||(n2>9));
			system("cls");
		if((ate==0)&&(n1==0)&&(n2==0)){
			printf("Programa encerrado!");
				return 0;
		}
		contador++;
	}while((n1==0)||(n2==0));
		for(i=1;i<=ate;i++){
			if(i%n1==0)
				printf(" Cafufa ");
			else{
				if(i%n2==0)
				printf(" Cafufa ");
			else{
				ultimodigito=i/10,ultimodigito=i*10,ultimodigito=i-ultimodigito;
				if((ultimodigito==n1)||(ultimodigito==n2))
					printf(" Cafufa ");
				else
					printf(" %i ",i);
			}
		}
		if(i!=ate)
			printf(",");
		else
			printf(".\n");
	}
	system("Pause");
	return 0;
}

