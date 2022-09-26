#include <stdio.h>
#include <string.h>

int main(){
	char nome[30];
	char endereco[65];
	char telefone[15];
	
    printf("Digite seu nome: \n");
    fgets(nome,40,stdin);
    
    printf("Digite seu endereco: \n");
    fgets(endereco,50,stdin);
   
    printf("Digite seu telefone: \n");
    fgets(telefone,15,stdin);

    printf("Dados solicitados:\n");
    printf("Nome: %s.\n", nome);
    printf("Endereço: %s.\n", endereco);
    printf("Telefone: %s.\n", telefone);
}



