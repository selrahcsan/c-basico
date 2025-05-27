// 3. Compile, encontre, explique e corrija os bugs
// O uso de números mágicos (valores literais que não dão pistas de seus significados)
// é desaconselhado porque dificultam a leitura semântica do código.
// Sendo assim, nós utilizaremos a constante simbólica EXIT_SUCCESS, 
// definida na biblioteca padrão com valor 0, em vez do inteiro literal 0 como argumento da instrução return:

//#include <stdio.h>

//int main(void) {
//    puts("Salve, simpatia!");
//    return EXIT_SUCCESS
//}


// Quantos erros foram encontrados e quais são eles?
// 4 Erros
//
// Quais são as correções sugeridas pelo gcc?
//
// faltou a inclusão da biblioteca stdlib 
// faltou um ponto e virgula na linha 11
// o EXIT_SUCCESS aparece como não  uma função declarado e como um identificador não declarado
// Como ficou o código corrigido?
//
//
//
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
  puts("Salve, simpatia!");
  return EXIT_SUCCESS;
}
