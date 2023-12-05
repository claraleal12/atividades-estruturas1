#include <stdio.h>  // printf, scanf
#include <stdlib.h> //funções malloc, calloc, free, exit

int main(void) {
    int tamanho  = 5;
    int contador;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    if(vetor == NULL) {
        printf("Erro na alocacao de memoria\n");
        exit(1); //abprta a execução do programa
    }
    else{
        printf("Alocacao realizada com sucesso!\n");
    }

    //ler os dados do vetor
    printf("Digite o valor do vetor:\n");
    for (contador = 0; contador < tamanho; contador++){
        scanf("%d", &vetor[contador]);
    }
    free(vetor);

return 0;
}

int main(void) {
    int tamanho = 5, novo_tamanho;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    printf("Entre com o novo tamanho do vetor:\n");
    scanf("%d", &novo_tamanho);
    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int));
    if (vetor == NULL) {
       printf("Erro ao alocar mamoria\n");
       exit(1);
    }
    else {
        printf("Sucesso ao alocar a memoria\n");
    }
    free (vetor);

return 0;
}

int main(void) {
    char * nome = (char*) malloc(50*sizeof(char));
    if(nome == NULL) {
        exit(1);
    }
    printf("Digite o seu nome completo\n");
    scanf("%s", nome);
    free(nome);

return 0;
}