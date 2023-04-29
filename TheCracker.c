#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 20
#define MAX_PASSWORDS 1000

int main(int argc, char *argv[]) {
    char passwords[MAX_PASSWORDS][MAX_PASSWORD_LENGTH];
    char *password_file = "passwords.txt";
    FILE *file;
    char line[MAX_PASSWORD_LENGTH];
    int i = 0;

    // Abrir o arquivo de senha para leitura
    file = fopen(password_file, "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo de senha.\n");
        exit(1);
    }

    // Ler as senhas do arquivo e armazená-las na matriz passwords
    while (fgets(line, MAX_PASSWORD_LENGTH, file) != NULL && i < MAX_PASSWORDS) {
        strcpy(passwords[i], line);
        i++;
    }

    // Fechar o arquivo de senha
    fclose(file);

    // Código a ser implementado aqui
    return 0;
}
