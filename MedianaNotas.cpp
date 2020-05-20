#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


typedef struct {
	float nota, mediana;
}Escola;

Escola esc[10];
Escola aux;

int i=0;

int menu()
{
	int opt;
		
		system("cls");
		
		printf("----MENU----");
		printf("\nEscolha uma das opcoes abaixo\n");
		printf("1 - Cadastrar nota\n2 - Listar notas\n3 - Mostrar Mediana\n4 - Sair");
		printf("\n\nOpcao: ");
		scanf("%i", &opt);
		return opt; 
}
void cadastro()
{
	char resp;
	
	do{
		system("cls");
		
		printf("Informe sua nota: ");
		scanf("%f", &esc[i].nota);
		
		printf("\nDeseja cadastrar outra nota? <S/N>\n");
		resp=getche();
		
		i++;
		
	}while(toupper (resp) == 'S' && i<10);
}
void lista()
{
	int j, k;
		
		system("cls");
		
		for(j=0; j<i; j++)
		{
			for(k=j+1; k<i; k++)
			{
				if(esc[j].nota<esc[k].nota)
				aux.nota = esc[j].nota;
				esc[k].nota = esc[j].nota;
				esc[j].nota = aux.nota;
			}
		}
		for(j=0; j<i; j++)
		{
			printf("Nota: %.2f\n", esc[j].nota);
		}
		
		system("pause");
		
}
void mediana1()
{
	
}
main()
{
	int opt;
		
		do{
			
			opt = menu();
			
				switch(opt)
				{
					case 1: cadastro();
						break;
					case 2: lista();
						break;
					case 3:	mediana1();
						break;
					case 4: exit(0);
						break;
					default:
					{
						printf("----Opcao invalida----");
						system("pause");
					}
				}
		}while(opt != 0);
}
