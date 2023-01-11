/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>
#include <limits.h>

//funzione di somma
int somma(int, int);

//funzione che somma x numeri inseriti
int sommaXInteri(int);

//funzione che trova il massimo di x interi
int massimo(int);


int main()
{
    int r;
    
    r=somma(5,18);
    printf("5 + 18 = %d", r);

    int c;

    printf("\ninserisci il numero di numeri: ");
    scanf("%d", &c);
    r=sommaXInteri(c);

    printf("\nsomma = %d\n", r);

    printf("\ninserisci il numero di numeri: ");
    scanf("%d", &c);
    r=massimo(c);

    printf("\nmassimo = %d\n", r);
}


int somma(int x, int y) 
{
    int s;
    s=x+y;
    return s;
}

int sommaXInteri(int x)
{
    int s=0;
    int n;

    for(int i = 0; i<x; i++)
    {
        printf("inserisci un numero: ");
        scanf("%d", &n);

        s+=n;
    }
    return s;
}

int massimo(int x)
{
    int max = INT_MIN, n;

    for(int i = 0; i<x; i++)
    {
        printf("inserisci un intero: ");
        scanf("%d", &n);

        if (n>max) max = n;
    }

    return max;
}