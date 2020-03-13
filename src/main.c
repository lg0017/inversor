/* Data de submissao:
 * Nome:
 * RA:
 */

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
