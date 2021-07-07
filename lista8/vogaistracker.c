#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file1 = fopen("teste.txt", "w");
    int quant=0;
    int cont=0;
    char letra;
    printf("insira o valor para a quantidade de letras\n");
    scanf("%d", &quant);
    for (int i = 1; i <= quant; i++)
    {
        printf("insira uma letra minuscula\n");
        scanf(" %c", &letra);
        fprintf(file1, " %c", letra);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' )
        {
            cont=cont+1;
        }
    }

    while (fgetc(file1) != EOF)
    {
        char resgate = fgetc(file1);
        printf("%c", resgate);
    }
    printf("o numero de vogais e: %d", cont);
    fclose(file1);
    return 0;
}