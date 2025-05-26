//4. Compile, pesquise e responda
//Dado o código abaixo (por exemplo, main.c):

#define EXIT_SUCCESS 0

int puts(const char *string);

int main(void) {
    puts("Salve, simpatia!");
    return EXIT_SUCCESS;
}

// Nenhum erro foi reportado, mas por quê?
// Não foi reportado erro pois o EXIT_SUCCESS foi declarado como uma constante com o valor de reportado
// Como você executaria o binário resultante?
// Quando não está especificado uma saída, ele vai gerar um arquivo padrão, o a.out
