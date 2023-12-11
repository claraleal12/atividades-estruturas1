#include <stdio.h>
#include <stdlib.h>

typedef struct docente {
    char nome[50];
    int idade;
    int matricula;
    char email[50];
}docente;

void preenche(struct docente * professor){
    printf("Digite o nome do docente: \n");
    scanf("%[^\n]" professor->nome);
    printf("Digite a idade do docente\n");
    scanf("%d", &professor->idade);
    printf("Digite a matricula do docente\n");
    scanf("%d", &professor->matricula);
    printf("Digite o email do docente\n");
    scanf("%s", &professor->email);

}

void imprime(struct docente * professor){
    printf("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n", professor->nome, professor->idade, professor->matricula, professor->email);
}

int main(void){
    struct docente * professor = (struct docente*) malloc(sizeof(struct docente));
    if(professor == NULL){
    exit(1);
    }

    preenche(professor);
    imprime(professor);
    free(professor);
    return 0;
}