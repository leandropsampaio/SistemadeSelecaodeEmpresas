/******************************************************************************* 
Autor: Leandro Pereira Sampaio 
Componente Curricular: Algoritmos I 
Concluido em: 14/04/2014 
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum 
trecho de código de outro colega ou de outro autor, tais como provindos de livros e 
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código 
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte 
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação. 
******************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
//Declaração das variáveis a serem utilizadas durante o processamento do software.
	int resultado1=0,resultado2=0,resultado3=0,resultado4=0,resultado5=0,resultado6=0,resultado7=0,resultado8=0,resultado9,resultado10=0,resultado11=0,resultado12=0,resultado13=0,resultado14=0,resultado15=0,resultado16=0,resultado17=0,resultadototal=0,codigo,cargopretendido,aptos=0;
	int secretaria,embalador,operador,eletricista,vendedor,tecnico,curso1,curso2,curso3,curso4,curso5,curso6,resultado18=0,resultado19=0,resultado20=0,resultado21=0,resultado22=0,resultado23=0,encerrar,maiorpont1=0,maiorpont2=0,maiorpont3=0,maiorpont4=0,maiorpont5=0,maiorpont6=0,codigoprimeiro,codigocandidato,secretariaapto=0;
	int embaladorapto=0,operadorapto=0,eletricistaapto=0,vendedorapto=0,tecnicoapto=0,maiorsec=0,maioremb=0,maiorope=0,maiorele=0,maiorven=0,maiortec=0,cont;
	int menorpont1=0,menorpont2=0,menorpont3=0,menorpont4=0,menorpont5=0,menorpont6=0,menorsec=0,menoremb=0,menorope=0,menorele=0,menorven=0,menortec=0,inseridos=0;
	float porcentagem=0;

	printf("  ******** BEM VINDO, AO SISTEMA DE SELECAO DA ENPRESA: ALIMENTOS SA! ********\n\n");	
	
	while (encerrar>=0)
	{
//"For", ulilizado para voltar o programa, quando a idade, não satisfazer os critérios de candidatos aptos.
		for(cont=1;cont<=1;cont++)
		{
//Entrada de informações, do usuário.
			printf("________________________________________________________________________________\n");
			printf("O codigo do candidato:   ");
			scanf("%d", &codigo);	
			inseridos++;
	
			printf("________________________________________________________________________________\n");
			printf("Digite a idade do candidato:   ");
			scanf("%d", &resultado1);

//Se o candidato não for apto a nenhum dos cargos, o programa solicitará novamente o código do candidato e sua idade, até que sua idade, faça parte dos requisitos necessários aos candidatos aptos.
			if (resultado1>19 and resultado1<51)
			{
			printf("________________________________________________________________________________\n");	
			printf("O CANDIDATO ESTA APTO A TODOS OS CARGOS!\n\n");
			aptos=aptos+1;
			printf("________________________________________________________________________________\n");
			}
	
			else 
			{
			printf("________________________________________________________________________________\n");
			printf("O CANDIDATO NAO ESTA APTO A NENHUM DOS CARGOS!\n\n");
			printf("________________________________________________________________________________\n");
			cont--;
			}	
		}
		
//Menu do cargo pretendido.	
	printf("Por favor, insira o codigo do cargo pretendido:\n ");
	printf("(1) Secretaria\n");
	printf(" (2) Embalador\n");
	printf(" (3) Operador de Maquina\n");
	printf(" (4) Eletricista\n");
	printf(" (5) Vendedor\n");
	printf(" (6) Tecnico em Informatica\n\n\t");
	scanf("%d", &cargopretendido);
	printf("________________________________________________________________________________\n");
//Perguntas feitas, e através de cada resposta, uma pontuação é adicionada ao resultado total, ao referente candidato.	
	
	printf("O candidato possui problema cardiaco? Sim(1) Nao(2):   ");
	scanf("%d", &resultado2);
	switch(resultado2)
	{
		case 1: resultado2 = resultado2-1; break;
		case 2: resultado2 = resultado2-1; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
//Após a digitaçõo, do número (1 ou 2), o programa levará para o correto "case", sendo ele o "case 1" ou "case 2".
//Se o usuário não digitar apenas o número (1 ou 2), o software dará que o valor digitado é inválido.
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui problema respiratorio? Sim(1) Nao(2):   ");
	scanf("%d", &resultado3);
	switch(resultado3)
	{
		case 1: resultado3 = resultado3-1; break;
		case 2: resultado3 = resultado3-1; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato e diabetico? Sim(1) Nao(2):   ");
	scanf("%d", &resultado4);
	switch(resultado4)
	{
		case 1: resultado4 = resultado4-1; break;
		case 2: resultado4 = resultado4-1; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui problema arterial? Sim(1) Nao(2):   ");
	scanf("%d", &resultado5);
	switch(resultado5)
	{
		case 1: resultado5 = resultado5-1; break;
		case 2: resultado5 = resultado5-1; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso de ate 10horas, sim(1) nao(2):   ");
	scanf("%d", &resultado6);
	switch(resultado6)
	{
		case 1: resultado6 = resultado6+0;
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso da duraçao de ate 10 horas:   ");
		scanf("%d", &curso1);
		resultado12 = resultado6*curso1; break;
		case 2: resultado18 = resultado6-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
//Caso a resposta dele for sim(1) o software fará, uma nova pergunta.
//Cada resposta vale um valor apropiado.	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso de 11 ate 40 horas, sim(1) nao(2):   ");
	scanf("%d", &resultado7);
	switch(resultado7)
	{
		case 1: resultado7 = resultado7+1;
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso da duraçao de 11 ate 40 horas:   ");
		scanf("%d", &curso2);
		resultado13 = resultado7*curso2; break;
		case 2: resultado19 = resultado7-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}

	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso acima de 40 horas, sim(1) nao(2):   ");
	scanf("%d", &resultado8);
	switch(resultado8)
	{
		case 1: resultado8 = resultado8+2;
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso da duraçao acima de 40 horas:   ");
		scanf("%d", &curso3);
		resultado14 = resultado8*curso3; break;
		case 2: resultado20 = resultado8-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso em areas afins, sim(1) nao(2):   ");
	scanf("%d", &resultado9);
	switch(resultado9)
	{
		case 1: resultado9 = resultado9+1;
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso em areas afins:   ");
		scanf("%d", &curso4);
		resultado15 = resultado9*curso4; break;
		case 2: resultado21 = resultado9-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso em lingua estrangeira, sim(1) nao(2):   ");
	scanf("%d", &resultado10);
	switch(resultado10)
	{
		case 1: resultado10 = resultado10+1; 
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso de lingua estrangeira:   ");
		scanf("%d", &curso5);
		resultado16 = resultado10*curso5; break;
		case 2: resultado22 = resultado10-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}
	
	printf("________________________________________________________________________________\n");
	printf("O candidato possui curso de informatica, sim(1) nao(2):   ");
	scanf("%d", &resultado11);
	switch(resultado11)
	{
		case 1: resultado11 = resultado11+2;
		printf("________________________________________________________________________________\n");
		printf("Quantas vezes o candidato fez o curso de informatica:   ");
		scanf("%d", &curso6);
		resultado17 = resultado11*curso6; break;
		case 2: resultado23 = resultado11-2; break;
		default: printf("****VALOR INVALIDO!****\n");
	}

//Resultadototal, é a soma de todos os pontos obtidos pelo candidato, através das perguntas feitas.	
	resultadototal = resultado2 + resultado3 + resultado4 + resultado5 + resultado12 + resultado13 + resultado14 + resultado15 + resultado16 + resultado17 + resultado18 + resultado19 + resultado20 + resultado21 + resultado22 + resultado23;

//Após a escolha do cargo pretendido pelo candidato, o "switch" escolherá qual dos case ele rodará, sendo que, cada cargo é definido por um case diferente, portanto foram utilizados 6 cases.
//Depois do case ser escolhido, o programa fará todas as funções, que estão dentro deles. No entanto, poderia ser utilizado "else if" ao invés de "if", pois, depois do "if" apropiado o software, iria pular todos os outros, aumentado assim, a processamento do programa. 
//Todavia, neste exato programa, não poderia ser, pois é necessário que todos os "ifs" rodem e não apenas o primeiro que for verdadeiro.
//Em cada case, será realizado inúmeros cálculos, que posteriormente serão somados, e lançador no relátorio final.
	
	switch(cargopretendido)
	{
		case 1: cargopretendido = secretaria+1;
		if (resultado1>19 and resultado1<51)
		{
			secretariaapto=secretariaapto+1;
		}
		if(resultadototal>maiorpont1) 
		{
			maiorpont1=resultadototal;
			maiorsec=codigo;
		}
		if(menorpont1==0)
		{
			menorpont1=resultadototal;
			menorsec=codigo;
		} 
		if(resultadototal<menorpont1)
		{
			menorpont1=resultadototal;
			menorsec=codigo;
		} break;
		
		case 2: cargopretendido = embalador+1;
		if (resultado1>19 and resultado1<51)
		{
			embaladorapto=embaladorapto+1;
		}
		if(resultadototal>maiorpont2) 
		{
		maiorpont2=resultadototal;
		maioremb=codigo;
		}
		if(menorpont2==0)
		{
			menorpont2=resultadototal;
			menoremb=codigo;
		} 
		if(resultadototal<menorpont2)
		{
			menorpont2=resultadototal;
			menoremb=codigo;
		} break;
		
		case 3: cargopretendido = operador+1;
		if (resultado1>19 and resultado1<51)
		{
			operadorapto=operadorapto+1;
		}
		if(resultadototal>maiorpont3) 
		{
		maiorpont3=resultadototal;
		maiorope=codigo;
		}
		if(menorpont3==0)
		{
			menorpont3=resultadototal;
			menorope=codigo;
		} 
		if(resultadototal<menorpont3)
		{
			menorpont3=resultadototal;
			menorope=codigo;
		} break;
		
		case 4: cargopretendido = eletricista+1;
		if (resultado1>19 and resultado1<51)
		{
			eletricistaapto=eletricistaapto+1;
		}
		if(resultadototal>maiorpont4) 
		{
		maiorpont4=resultadototal;
		maiorele=codigo;
		}
		if(menorpont1==0)
		{
			menorpont4=resultadototal;
			menorele=codigo;
		} 
		if(resultadototal<menorpont4)
		{
			menorpont4=resultadototal;
			menorele=codigo;
		} break;
		
		case 5: cargopretendido = vendedor+1;
		if (resultado1>19 and resultado1<51)
		{
			vendedorapto=vendedorapto+1;
		}
		if(resultadototal>maiorpont5) 
		{
		maiorpont5=resultadototal;
		maiorven=codigo;
		}
		if(menorpont5==0)
		{
			menorpont5=resultadototal;
			menorven=codigo;
		} 
		if(resultadototal<menorpont5)
		{
			menorpont5=resultadototal;
			menorven=codigo;
		} break;
		
		case 6: cargopretendido = tecnico+1;
		if (resultado1>19 and resultado1<51)
		{
			tecnicoapto=tecnicoapto+1;
		}
		if(resultadototal>maiorpont6) 
		{
		maiorpont6=resultadototal;
		maiortec=codigo;
		}
		if(menorpont6==0)
		{
			menorpont6=resultadototal;
			menortec=codigo;
		} 
		if(resultadototal<menorpont6)
		{
			menorpont6=resultadototal;
			menortec=codigo;
		} break;
	
	} 
//"system("cls")" é utilizado, para apagar tudo o que tinha, antes na tela, mostrando apenas o que vem depois deste comando. Obs: Dá uma melhor organizada no programa.	 
//OBS: É necessário a biblioteca "stdlib.h", para o funcionamento deste comando.
	system("cls"); 
//Aqui serão mostrados na tela os seguintes valores: o código do candidato e a soma de todos os pontos obtidos.	
	printf("________________________________________________________________________________\n");
	printf("O CANDIDATO %d TEVE: %d PONTOS\n\n", codigo,resultadototal);
	printf("________________________________________________________________________________\n");
	printf("CASO DESEJAR A FINALIZACAO DOS CANDIDATOS DIGITE UM NUMERO NEGATIVO, E SE DESEJAR CONTINUAR DIGITE UM NUMERO POSITIVO:   ");
	scanf("%d", &encerrar);
	
}
	
	system("cls"); 
	
	porcentagem=100*aptos/inseridos;
//Depois, de serem calculados todos os valores, neste momento, serão mostrados as variaveis com seus respectivos resultados.
	printf("________________________________________________________________________________\n");
	printf("O total de candidatos inseridos e? %d\n\n", inseridos);
	printf("________________________________________________________________________________\n");
	printf("A porcentagem de candidatos aptos e? %.2f %\n\n", porcentagem);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Secretaria: %d\n\n", secretariaapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont1,maiorsec);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont1,menorsec);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Embalador: %d\n\n", embaladorapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont2,maioremb);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont2,menoremb);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Operador de Maquina: %d\n\n", operadorapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont3,maiorope);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont3,menorope);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Eletricista: %d\n\n", eletricistaapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont4,maiorele);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont4,menorele);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Vendedor: %d\n\n", vendedorapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont5,maiorven);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont5,menorven);
	printf("________________________________________________________________________________\n");
	printf("Total de aptos a vagas de Tecnico em informatica: %d\n\n", tecnicoapto);
	printf("A pontuacao do melhor candidato foi? %d e seu codigo e? %d\n\n", maiorpont6,maiortec);
	printf("A pontuacao do pior candidadato foi? %d e seu codigo e? %d\n\n", menorpont6,menortec);
	printf("________________________________________________________________________________\n");
//getch, utilizado para congelar a tela, e uma melhor opção, pois, ele roda em outros programas e sistemas operacionais.
//Para a utilização da função "getch", é necessário colocar a biblioteca "conio.h"
	getch();
	
	return 0;
	
}
