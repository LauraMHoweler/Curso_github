/*
2) Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores,
um contendo os valores pares e outro os ímpares e mostrar os três vetores
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"vetores.h"

int main()
{
    //Variaveis
    int vetgeral[15], i, j=0, k=0, contPar=0, contImpar=0;

    //entrada de dados
    printf("\n=== Vetor ===\n");
    gerarVetorInteiroDe1aLimite(vetgeral, 15, 25);

    mostrarVetorInteiro(vetgeral, 15);


    for(i=0; i<15; i++) //Percorrer o Vetor para saber quais são impar ou par.
    {
        if(vetgeral[i] % 2 == 0)
        {
            contPar++;
        }
        else
        {
            contImpar++;
        }
    }
    int vetPar[contPar], vetImpar[contImpar];

    for(i=0; i<15; i++)
    {
        if(vetgeral[i] % 2 == 0)
        {
            vetPar[j] = vetgeral[i];
            j++;
        }
        else
        {
            vetImpar[k] = vetgeral[i];
            k++;
        }
    }
    printf("\n=== Vetor de Pares ===\n");
    mostrarVetorInteiro(vetPar, contPar);

    printf("\n=== Vetor de Impares ===\n");
    mostrarVetorInteiro(vetImpar, contImpar);
    return 0;
}
