#include <stdio.h>

int main()
{

//Variaveis e seus valores//
char nome [30];
int idade;
char datadeNasc [30];
char email;
int numerodeTel;
char cidade [30];
char estado [30];
char bairro [30];
char referenceTrabalho [30];
int tempoTrabalhreference;
char moreSobre [30];

//Pedindo informações ao usário e recebendo essas informações//

printf("Bem Vindo (a) ao Curriculo Por linguagem C,\nSe estiver pronto (a), digite enter\n\n");
printf("Por favor digite seu nome completo:\n");
fgets(nome, 30, stdin);
printf("Nome completo: %s", nome);
printf("Digite por favor sua idade:\n");
scanf("%d",&idade);
printf("\nIdade Atual: %d\n",idade);


return 0;
}
