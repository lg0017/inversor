/* Data de submissao: 13/03/2020
 * Nome: Luiz Guilherme Silva Moreira
 * RA: 202391
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
  char b = '0';
  char c = '0';
  int cont = 0;
  int contaux = 0;
  char pilha_1[100];
  int n_pilha_1=0;

  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);

  /* Tratando a entrada e a saida */
  while(a != '\n'){
        a = buffer[cont];
        push(pilha_1, &n_pilha_1, a);
	cont++;
        if(a == ' ' || a == '\n'){
		c = pop(pilha_1, &n_pilha_1);
		while(n_pilha_1 != 0){
		        b = pop(pilha_1, &n_pilha_1);
			printf("%c",b);
	        }
		printf("%c",c);
	}
        
  }

  return 0;
}
