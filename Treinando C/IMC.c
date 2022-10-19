// Aula: Laboratório de Desenvolvimento de Algoritmos
// Aluno: Paulo Henrique de Oliveira
// Atividade de calcular IMC

#include <stdio.h>

int main()
{
    float massa, altura, _IMC;

    printf("Digite seu Peso: ");
    scanf("%f",&massa);
    printf("Digite sua Altura: ");
    scanf("%f",&altura);

    _IMC = massa/(altura,2); 

    printf("-----------------------------------\n"); 
    printf("Seu IMC e: %0.2f\n",_IMC);

    if(_IMC<17)
    {
        printf("Muito abaixo do peso.\n");
    }
    else
    {
        if(_IMC>17 && _IMC<18.49)
        {
            printf("Abaixo do peso.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<24.99)
            {
                printf("Peso normal.\n");
            }
            else
            {
                if(_IMC>25 && _IMC<29.99)
                {
                    printf("Acima do peso.\n");
                }
                else
                {
                    if(_IMC>30 && _IMC<34.99)
                    {
                        printf("voce esta Obeso.\n");
                    }
                    else
                    {
                        if(_IMC>35 && _IMC<39.99)
                        {
                            printf("Obesidade Severa.\n");
                        }
                        else
                        {
                            if(_IMC>40)
                            {
                                printf("voce esta em Obesidade MORBIDA.\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
