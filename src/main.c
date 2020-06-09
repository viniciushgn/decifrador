/* Tarefa de decifrar uma cifra
 *
 * Dica: veja em referencia/cifrador.c o codigo-fonte do programa
 * que gerou as cifras que voce precisa decifrar!
 */

#include <stdio.h>

#define TAM_BUFFER 50
char buffer_entrada[TAM_BUFFER];
char buffer_saida[TAM_BUFFER];

int main() {
  /* Leitura da entrada */
  fgets(buffer_entrada, TAM_BUFFER, stdin);



  /* Escrever saida na tela */
  printf("%s\n", buffer_saida);

  return 0;
}
