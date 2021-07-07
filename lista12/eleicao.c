#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct chapa{
    char NomeChapa [150];
    char NomeResp [150];
    int Votos;
}chapanova;
int main(void){
    chapanova chap[2];
    int voto;
    for (int i = 0; i < 2; i++)
    {
        chap[i].Votos = 0;
        printf("insira o nome da %da Chapa: \n", i+1);
        scanf("%s", &chap[i].NomeChapa);
        printf("agora insira o nome do Responsavel: \n");
        scanf("%s", &chap[i].NomeResp);
    }

    for (int i = 0; i < 100; i++)
    {
        printf("Ola, aluno %d, qual chapa voce gostaria de votar?\n", i+1);
        printf("Para votar na chapa %s, digite 1, para votar na chapa %s digite 2\n", chap[0].NomeChapa, chap[1].NomeChapa);
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            chap[0].Votos=chap[0].Votos+1;

            break;
        case 2:
            chap[1].Votos=chap[1].Votos+1;
            
            break;
        default:
            ("Voto invalido\n");
            break;
        }

    }

    if (chap[0].Votos > chap[1].Votos)
    {
        printf("\n\n\nParabens para a chapa %s do responsavel %s pela vitoria! Foram registrados %d votos a favor dessa chapa\n\n\n", chap[0].NomeChapa, chap[0].NomeResp, chap[0].Votos);
    }
    else if (chap[1].Votos > chap[0].Votos)
    {
        printf("\n\n\nParabens para a chapa %s do responsavel %s pela vitoria! Foram registrados %d votos a favor dessa chapa\n\n\n", chap[1].NomeChapa, chap[1].NomeResp, chap[1].Votos);
    }
    else if (chap[0].Votos == chap[1].Votos)
    {
        printf("Ocorreu um empate entre as duas chapas, as duas tiveram %d votos", chap[1].Votos);
    }
    
    
    return 0;
}
