
#include <stdio.h>

/* sempre lembrar: if (numero % 2 == 0) {
    printf("Par\n");
} else {
    printf("Impar\n");
}

SEMPRE LEMBRAR: 

if (a == b)   // igual
if (a != b)   // diferente
if (a > b)    // maior
if (a < b)    // menor
if (a >= b)   // maior ou igual
if (a <= b)   // menor ou igual

+  // soma
-  // subtração
*  // multiplicação
/  // divisão
%  // resto (muito importante)

COMO SOMAR DENTRO DE IF SERIA MAIS OU MENOS ASSIM:
int variavel1;
int variavel2;
int variavel3;
int outravariavel;
if (variavel1 + variavel2 + variavel3 >= outravariavel) {
    printf("kkkkk");
}


COMO SOMAR FORA E SÓ PEGAR A SOMA NO IF:

int variavel1;
int variavel2;
int variavel3;
int outravariavel
int soma;
soma = variavel1 + variavel2 + variavel3;

if (soma >= outravariavel) {
    printf("akakakakak");
}
*/


struct Login {
  // Váriaveis de login
  
  int senhaCorreta;
  int senhaDigitada;
};

struct Curriculo {
    
//Variaveis e seus valores//
char nome [30];
int idade;
char datadeNasc [30];
char email [30];
char numerodeTel [30]; 
char cidade [30];
char estado [30];
char bairro [30];
char referenceTrabalho [30];
int tempoTrabalhreference;
char moreSobre [30];

};
    

int main()
{

struct Login usuario;
usuario.senhaCorreta = 2580;
struct Curriculo pessoa;

//Pedindo informações ao usário e recebendo essas informações//


printf("Bem Vindo (a) ao Curriculo Por linguagem C,\nSe estiver pronto (a), digite enter\n\n");
printf("Digite sua senha de usuario:\n");
scanf("%d",&usuario.senhaDigitada);
if (usuario.senhaDigitada == usuario.senhaCorreta) {
    printf("Senha correta, vamos criar seu curriculo\n");
}

else if (usuario.senhaDigitada != usuario.senhaCorreta) {
    printf("Senha errada , reinicie o programa e tente novamente");
    return 0;
}

getchar();
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
getchar();
printf("\nAgora por favor digite seu número de telefone:\n");
fgets(pessoa.numerodeTel, 30, stdin);
printf("Número de Telefone: %s",pessoa.numerodeTel);
printf("Agora por favor , digite sua cidade:\n");
fgets(pessoa.cidade, 30, stdin);
printf("Cidade:%s",pessoa.cidade);
printf("Por favor digite seu estado:\n");
fgets(pessoa.estado, 30, stdin);
printf("Estado: %s",pessoa.estado);
printf("Digite seu bairro:\n");
fgets(pessoa.bairro, 30, stdin);
printf("Bairro: %s",pessoa.bairro);
printf("Agora por favor digite o nome de um lugar que já trabalhou:\n");
fgets(pessoa.referenceTrabalho, 30, stdin);
printf("Referencia de trabalho: %s",pessoa.referenceTrabalho);








 

return 0;
}
