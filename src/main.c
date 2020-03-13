/* Data de submissao:
 * Nome:
 * RA:
 */
#include <stdio.h>
const int tam_buffer=100;

void push(char *pilha, int *n_pilha, char c) {
/* Insere caractere c na pilha */
  if ((*n_pilha) < 10) {
    pilha[*n_pilha]=c;
    (*n_pilha)++;
  }
}

char pop(char *pilha, int (*n_pilha)) {
/* Remove caractere do topo da pilha */
  char c;
  if ((*n_pilha)>0) {
    (*n_pilha)--;
    c = pilha[*n_pilha];
  }
  return c;
}

int main() {
  char a = '0';
  int cont = 0;
  char pilha_1[100];
  char pilha_2[100];
  int n_pilha_1=0;
  int n_pilha_2=0;

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
