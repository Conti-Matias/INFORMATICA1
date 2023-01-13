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

//funzione che trova il MCD tra due numeri
int MCD(int, int);

//funzione che restituisce la somma dei divisori del parametro
int sommaDivisori(int);

//funzione che presi in input base e altezza restituisce l'area
int areaRettangolo(int, int);



int main()
{
    int r;
    int num, num2;
    
    /*r=somma(5,18);
    printf("5 + 18 = %d", r);*/

    

    /*printf("\ninserisci il numero di numeri: ");
    scanf("%d", &num);
    r=sommaXInteri(num);

    printf("\nsomma = %d\n", r);*/




    /*printf("\ninserisci il numero di numeri: ");
    scanf("%d", &num);
    r=massimo(num);

    printf("\nmassimo = %d\n", r);*/



    /*printf("Inserisci due numeri: \n");
    scanf("%d%d", &num, &num2);
    r=MCD(num, num2);
    printf("\nMCD = %d\n\n", r);*/



    /*printf("Inserisci un numero: ");
    scanf("%d", &num);
    r=sommaDivisori(num);
    printf("\nSomma dei divisori = %d\n\n", r);*/

    printf("Inserisci due numeri: \n");
    scanf("%d%d", &num, &num2);
    r=areaRettangolo(num, num2);
    printf("\narea = %d\n\n", r);


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

        s=somma(s,n);
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

int MCD(int x, int y)
{
    float r;
    int c;

    if(y>x){
        c=x;
        x=y;
        y=c;
    }

    while(y!=0)
    {
        r = x%y;
        x=y;
        y=r;
    }

    return x;
    
}

int sommaDivisori(int x)
{
    int r = 0;

    for(int i = 1; i<x; i++)
    {
        if(x%i==0) r += i;
    }

    return r;
}

int areaRettangolo(int x, int y)
{
    int area = x * y;

    return area;
}