// Escreva um programa que, dado um valor inteiro associado à variável num,
// calcule e imprima os resultados das seguintes operações:
  
// num multiplicado por 15;
//  num somado a 42;
  
// 123 menos num;
// Divisão de num por 5;
// Resto da divisão de num por 5.

// Esquema geral da saída do programa:
// NUM x 15 = VALOR
// NUM + 42 = VALOR
// 123 - NUM = VALOR
// NUM / 5 = VALOR
// RESTO DE NUM / 5 = VALOR


#include <stdio.h>

int main(){
	int num = 5;

	printf("%d x 15 = %d\n", num, num * 15);
	printf("%d + 42 = %d\n", num, num + 42);
	printf("123 - %d = %d\n", num, 123 - num);
	printf("%d / 5 =  %d\n", num, num / 5);
	printf("Resto de %d / 5 = %d\n", num, num % num);


}





