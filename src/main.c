/* Data de submissao:
 * Nome:
 * RA:
 */
#include <stdio.h>
const int tam_buffer=100;
char pilha[100];
int n_pilha=0;

void push(char c) {

/* Insere caractere c na pilha */
  if (n_pilha < tam_buffer) {
    pilha[n_pilha]=c;
    n_pilha++;
  }
}

char pop() {

/* Remove caractere do topo da pilha */
  char c;
  if (n_pilha>0) {
    n_pilha--;
    c = pilha[n_pilha];
  }
  return c;
}

int main() {
  char a = '0';
  int cont = 0;
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);

  /* Tratando a entrada */
  while(a != '\n'){
        a = buffer[cont];
        /* Adicionando a pilha */
        push(a);
        cont++;
  }

  /* Ajustando a pilha */
  cont--;
  a = pop();

  /* Tratando a saida */
  while(cont != 0){
    /* Removendo da pilha */
    a = pop();
    printf("%c", a);
    cont--;
  }
  printf("\n");

  return 0;
}
