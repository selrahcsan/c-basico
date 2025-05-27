# Pesquise e responda

## 1 - Quais são as finalidades da função printf?

A função printf é usada para imprimir saída formatada na saída padrão

## 2 - Em que cabeçalho da glibc ela é declarada?

A função printf é declarada no cabeçalho:

```C
#include <stdio.h>
```

## 3 - Quantos argumentos ela recebe?

A função printf recebe:

Pelo menos 1 argumento obrigatório: a string de formato.
Um número variável de argumentos adicionais, dependendo dos especificadores de formato usados na string.

```C
int printf(const char *format, ...);
```

## 4 - Como fazer para que a saída imprima quebras de linha?

Use o caractere especial \n (barra invertida + "n") dentro da string:

## 5 - Para que servem os especificadores de formato %d, %s, %c e %f?

| Especificador | Significado                    | Tipo esperado       | Exemplo de uso                    |
| ------------- | ------------------------------ | ------------------- | --------------------------------- |
| `%d`          | Inteiro decimal                | `int`               | `printf("Idade: %d", idade);`     |
| `%s`          | Cadeia de caracteres (string)  | `char *` (ponteiro) | `printf("Nome: %s", nome);`       |
| `%c`          | Caractere                      | `char`              | `printf("Letra: %c", letra);`     |
| `%f`          | Ponto flutuante (float/double) | `float` ou `double` | `printf("Altura: %.2f", altura);` |
