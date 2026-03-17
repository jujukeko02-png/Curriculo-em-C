#include <stdio.h>


struct Curriculo {
    
//Variaveis e seus valores//
char nome [30];
int idade;
char datadeNasc [30];
char email [30];
int numerodeTel;
char cidade [30];
char estado [30];
char bairro [30];
char referenceTrabalho [30];
int tempoTrabalhreference;
char moreSobre [30];

};
    

int main()
{

struct Curriculo pessoa;

//Pedindo informações ao usário e recebendo essas informações//


printf("Bem Vindo (a) ao Curriculo Por linguagem C,\nSe estiver pronto (a), digite enter\n\n");
printf("Por favor digite seu nome completo:\n");
fgets(pessoa.nome, 30, stdin);
printf("Nome completo: %s", pessoa.nome);
printf("Digite por favor sua idade:\n");
scanf("%d",&pessoa.idade);
printf("\nIdade Atual: %d\n",pessoa.idade);    
printf("Por favor digite sua data de nascimento:\n");
scanf("%s",&pessoa.datadeNasc);
printf("Data de Nascimento:%s\n",pessoa.datadeNasc);
printf("Digite agora o seu email:\n");
scanf("%s",&pessoa.email);
printf("Email: %s\n",pessoa.email);








 

return 0;
}
