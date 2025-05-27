#include <stdio.h> // O que é isso e para que serve? 

// Por que todo o programa é escrito na função 'main()'?
//
// Quando um programe em C, é executado, a função Main é usada como um ponto de partida, sem a função Main
// o programa em C, não vai funcionar.
//

int main(void) {
    
    puts("Salve, simpatia!"); // O que faz e como se usa a função 'puts()'?
  // O puts imprime a string na tela, seria um similar do echo no bash. 
  // Para usar o puts, basta usar uma string como argumento entre as aspas duplas.
  // O puts só funciona com strings
  //

    return 0; // Para que serve esta instrução? 
  // é usado o zero, pois a main, está como int, e assim é esperado um valor do tipo inteiro
  // 0 indica que o programa retornou com sucesso
}
