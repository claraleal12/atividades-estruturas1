//QUESTAO 1

#include <stdio.h>

int main() {
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
     --x;
    (*p) += x;

printf("%d %d %d:", x, y, *p);

return 0;
}

//RESP: 3, 4, 4

// QUESTAO 2

#include <stdio.h>

int main(void) {
int x, *p;
x = 100;
p = x;
printf(“Valor de p = %p\tValor de *p = %d”,p, *p);
}


//QUESTAO 3:

#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}

//RESP: 11, 20, 10, 30

//QUESTAO 4

nao consegui resolver