#include <stdio.h>
#include <math.h>
int main(void)
{
    double massa, inimassa;
    int temposeg=0, tempomin=0, tempohora=0;
    printf("insira a massa do material em gramas \n");
    scanf("%lf", &massa);
    inimassa = massa;
    while(massa > 0.5)
    {
        massa = massa/2;
        temposeg = temposeg + 50;
    }
    tempomin = temposeg/60;
    tempohora = temposeg/3600;
    printf("a massa inicial e: %0.2lf", inimassa);
    printf("o tempo total em horas e: %d", tempohora);
    printf("o tempo total em minutos e: %0.2lf", tempomin);
    printf("o tempo total em segundos e: %0.2lf", temposeg);
}