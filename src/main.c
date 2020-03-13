/* Data de submissao:
 * Nome:
 * RA:
 */

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

#include <stdio.h>
const int tam_buffer=100;

int main() {
  char a = '0';
  int cont = 0;
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  printf("%s", buffer);

  /* Tratando a entrada */
  while(a != '\n'){
        a = buffer[cont];
        cont++;
  }
  return 0;
}
