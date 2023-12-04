#include <stdio.h>

//PARTE 1 DA AULA

int main(void){
   int x, y;
   y = 2;
   int *p1, *p2;
   p1 = &y;
   x = 1;
   p2 = p1;
   (*p1)++;
   printf("%d %d", x, y);
return 0;
}

//PARTE 2

int main(){
   float y = 2.0;
   float *p;
 p = &y;
 *p = 3;
   float **pp;
   pp = &p;
   *(*pp) = 4;
 printf("%f %f", p, pp);

return 0;    
}

//PARTE 3

int inc(int num){
   return (++num);
}
int main(void){
   int numero = 5;
  numero = inc(numero);
   printf("%d", numero);

return 0;
}
   
//PARTE 4

void incrementa(int *ponteiro) {
     (* ponteiro)++;
}

int main(){
   int variavel = 5;
   incrementa (&variavel);
   printf("Valor da variavel: %d", variavel);

return 0;
} 

//PARTE 5

int *cria_variavel() {
    int variavel = 5;
    return &variavel;
}

int main() {
    int *ponteiro = cria_variavel();
    printf("Valor da variavel %d:", *ponteiro);

return 0;
}

//PARTE 6

int soma(int a, int b) {
    return a + b;
}


int subtracao(int a, int b) {
    return a - b;
}


int multiplicacao(int a, int b) {
    return a * b;

}


int divisao(int a, int b) {
    return a/b;

}

int calcula(int x, int y, int (*operacao)(int, int)) {
    return (*operacao)(x, y);

}


int main() {
    int resultado = calcula(5, 3, divisao);
    printf("Resultado: %d", resultado);

return 0;

}